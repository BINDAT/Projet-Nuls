Value = input("Tapez un mot d'au plus 8 caractères : ")
LetterNum = 1

for Letter in Value:
    print("La lettre ", LetterNum, " est ", Letter)
    LetterNum+=1
    if LetterNum > 8:
        print("La chaîne est longue !")
        break