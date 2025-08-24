class Animal: # Classe de base
    def __init__(self, Name="", Age=0, Type=""): # Constructeur de la classe Animal
        self.Name = Name # Nom de l'animal
        self.Age = Age # Âge de l'animal
        self.Type = Type # Type de l'animal

    def GetName(self): # Méthode pour obtenir le nom de l'animal
        return self.Name

    def SetName(self, Name): # Méthode pour définir le nom de l'animal
        self.Name = Name

    def GetAge(self): # Méthode pour obtenir l'âge de l'animal
        return self.Age

    def SetAge(self, Age): # Méthode pour définir l'âge de l'animal
        self.Age = Age

    def GetType(self): # Méthode pour obtenir le type de l'animal
        return self.Type

    def SetType(self, Type): # Méthode pour définir le type de l'animal
        self.Type = Type

    def __str__(self): # Méthode pour afficher les informations de l'animal
        return "{0} est un {1} âgé de {2} ans.".format(self.Name, self.Type, self.Age)

class Chicken(Animal): # Classe dérivée pour les poules
    def __init__(self, Name="", Age=0):
            self.Name = Name
            self.Age = Age
            self.Type = "poulet"
        
    def SetType(self, Type):
        print("Désolé, {0} sera toujours un {1}."
                  .format(self.Name, self.Type))

    def MakeSound(self): # Méthode pour faire le son de la poule
        print("{0} dit Cot, Cot, Cot, Codette !".format(self.Name))

MyChicken = Chicken("Arthur", 2) # Création d'une instance de la classe Chicken
print(MyChicken) # Affichage des informations de la poule

MyChicken.SetAge(MyChicken.GetAge() + 1) # Incrémentation de l'âge de la poule
print(MyChicken) # Affichage des informations mises à jour de la poule

MyChicken.SetType("Gorille") # Tentative de changement du type de l'animal
print(MyChicken) # Affichage des informations de la poule après tentative de changement de type

MyChicken.MakeSound()