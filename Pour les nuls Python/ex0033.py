LetterNum = 1
for Letter in "Bonjour !":
    if Letter == "j":
        continue
        print("La lettre j rencontrée, traitement interrompu")
    print("La lettre ", LetterNum, " est ", Letter)
    LetterNum+=1