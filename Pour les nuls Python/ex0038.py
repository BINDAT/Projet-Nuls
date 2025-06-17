try: #ici ont lance fonction try
    Value = int(input("Tapez un nombre entre 1 et 10 :"))
except ValueError: #si faux la condition ValueError ce lance
    print("Vous devez tapez un nombre entre 1 et 10 !")
else: #ici else est coupée en deux
    if (Value > 0) and (Value <= 10): #si bon la val sera afficher sans problème.
        print("Vous avez tapé : ", Value)
    else: #sinon si faux cela seras afficher ici.
        print("La valeur que vous avez tapée est incorrecte !")