Colors = ["Rouge", "Orange", "Jaune", "Vert", "Bleu"] #Var tableau contenant des chaînes de caractères
ColorsSelect = "" #Var vide pour sélectionner contenant juste une val chaîne vide
while str.upper(ColorsSelect) != "QUITTER": #boucle while qui cherche les vals dans ColorsSelect si sauf si quitte
    ColorsSelect = input("Sélectionnez  le nom d'une couleur : ") #input dans ColorsSelect qui contient en mémoire la saisie
    if (Colors.count(ColorsSelect) >= 1): #cherche dans le tableau Colors avec la mémoire si un éléments est contenu
        print("La couleur existe dans la liste !")
    elif (str.upper(ColorsSelect) != "QUITTER"): #si ne correspond pas à un élément est dans un tableau
        print("La liste ne contient pas cette couleur.")