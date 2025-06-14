LetterNum = 1 #créer la variable avec une valeur
for Letter in "Bonjour !": #ici une boucle for avec Letter et en valeur une chaîne de caractère
    if Letter == "j": #ici Letter prend la lettre j directement
        continue #saute le prochain
        print("La lettre j rencontrée, traitement interrompu") #ici sauté
    print("La lettre ", LetterNum, " est ", Letter) #tout est affiché sauf la lettre j à cause de la condition
    LetterNum+=1 #auto-incrémentation