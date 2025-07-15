Colors = ["Rouge", "Orange", "Jaune", "Vert", "Bleu"] #var tableau
for Item in Colors: #boucle for du nom Item avec en paramètre Colors
    print(Item, end= " ") #affichage avec espace
print() #affichage
Colors.sort() #tri les vals du tableau
for Item in Colors:  #nouvelle boucle Item avec en paramètre Colors
    print(Item, end=" ") #affichage mais à partir de la dernière val
print()