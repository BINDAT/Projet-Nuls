Value = input("Tapez moins de 8 caractères : ") #Ici ont créer une variable une variable avec entrée de saisit et message
LetterNum = 1 #créer une variable avec sa valeur

for Letter in Value: #ici une boucle for avec Letter et Value
    print ("La lettre ", LetterNum, " est ", Letter)
    LetterNum+=1 #auto-incrémentation
    if (Letter == "" or Letter == Value[-1]): #ici affichage avec un -1 probablement pour évité la saisit de l'entrée
        break
else:
    print("La chaîne est vide.")