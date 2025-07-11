Colors = ["Rouge", "Orange", "Jaune", "Vert", "Bleu"]
ColorsSelect = ""
while str.upper(ColorsSelect) != "QUITTER":
    ColorsSelect = input("Sélectionnez  le nom d'une couleur : ")
    if (Colors.count(ColorsSelect) >= 1):
        print("La couleur existe dans la liste !")
    elif (str.upper(ColorsSelect) != "QUITTER"):
        print("La liste ne contient pas cette couleur.")