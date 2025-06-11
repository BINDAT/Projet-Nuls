Value = int(input("Tapez un nombre entre 1 et 10 : ")) #Ici une variable avec un message et une entrée de saisit

if (Value > 0) and (Value <= 10): #La condition ici prendra pour correcte toute valeur en 1 et 10
    print("Vous avez tapé : ", Value)
else:
    print("Vous avez tapé une valeur incorrecte !")