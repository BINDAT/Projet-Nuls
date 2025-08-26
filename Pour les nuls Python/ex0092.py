class FormatData: # Classe pour formater les données
    def __init__(self, Name="", Age=0, Married=False): # Constructeur de la classe
        self.Name = Name # Nom de la personne
        self.Age = Age # Âge de la personne
        self.Married = Married # État civil de la personne

    def __str__(self): # Méthode pour afficher les informations de la personne
        OutString = "'{0}', {1}, {2}".format(
            self.Name,
            self.Age,
            self.Married) # État civil de la personne
        return OutString # Chaîne formatée

NewData = [FormatData("Georges", 65, True),
           FormatData("Sophie", 47, False),
           FormatData("Pierre", 52, True)] # Liste des données formatées

for Entry in NewData: # Boucle pour afficher chaque entrée
    print(Entry) # Affichage de l'entrée formatée