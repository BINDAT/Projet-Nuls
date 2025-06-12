print("1. Rouge")
print("2. Orange")
print("3. Jaune")
print("4. Vert")
print("5. Bleu")
print("6. Pourpre") #Affichage

Choice = int(input("Choisissez votre couleur favorite : ")) #variable avec demande de saisit et un affichage

if (Choice == 1): #condition à choix multiple en fonction du nombre choisi
    print("Vous avez choisi Rouge !")
elif (Choice == 2):
    print("Vous avez choisi Orange !")
elif (Choice == 3):
    print("Vous avez choisi Jaune !")
elif (Choice == 4):
    print("Vous avez choisi Vert !")
elif (Choice == 5):
    print("Vous avez choisi Bleu !")
elif (Choice == 6):
    print("Vous avez choisi Pourpre !")
else:
    print("Vous avez fait un choix invalide !")