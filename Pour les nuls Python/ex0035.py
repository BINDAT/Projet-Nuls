Value = input("Tapez moins de 8 caractères : ")
LetterNum = 1

for Letter in Value:
    print ("La lettre ", LetterNum, " est ", Letter)
    LetterNum+=1
    if (Letter == "" or Letter == Value[-1]):
        break
else:
    print("La chaîne est vide.")