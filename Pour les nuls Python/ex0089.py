class MyClass: #Cette classe gère une liste d'éléments
    def __init__(self, *args): #Cette méthode initialise la classe avec une liste d'éléments
        self.Input = args #Cette variable stocke la liste des éléments

    def __add__(self, Other): #Cette méthode permet d'ajouter deux objets de la classe MyClass
        Output = MyClass() #Cette variable stocke le résultat de l'addition
        Output.Input = self.Input + Other.Input #Cette opération concatène les listes d'éléments
        return Output #Cette opération renvoie le résultat de l'addition

    def __str__(self): #Cette méthode renvoie une représentation sous forme de chaîne de caractères de l'objet
        Output = "" #Cette variable stocke la représentation sous forme de chaîne de caractères de l'objet
        for Item in self.Input: #Cette opération parcourt la liste des éléments
            Output += Item #Cette opération ajoute l'élément courant à la représentation sous forme de chaîne de caractères
            Output += " " #Cette opération ajoute un espace après chaque élément
        return Output.strip() #Cette opération renvoie la représentation sous forme de chaîne de caractères de l'objet

Value1 = MyClass("Rouge", "Vert", "Bleu") #Cette variable stocke la première liste d'éléments
Value2 = MyClass("Jaune","Pourpre","Cyan") #Cette variable stocke la deuxième liste d'éléments
Value3 = Value1 + Value2 #Cette variable stocke le résultat de l'addition des deux listes d'éléments

print("{0} + {1} = {2}"
      .format(Value1, Value2, Value3)) #Cette opération affiche le résultat de l'addition des deux listes d'éléments