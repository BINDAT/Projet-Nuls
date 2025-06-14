Value = input("Tapez un mot d'au plus 8 caractères : ") #Variable avec entrée de saisit et un affichage
LetterNum = 1 #Créer est initialise la variable avec sa valeur à 1

for Letter in Value: #créer une boucle for avec Letter est prend dans Value
    print("La lettre ", LetterNum, " est ", Letter) #affiche le nombre de lettre avec la lettre
    LetterNum+=1 #Auto-incrémentation de la variable LetterNum
    if LetterNum > 8: #Condition si supérieur à 8.
        print("La chaîne est longue !")
        break