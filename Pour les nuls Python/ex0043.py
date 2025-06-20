try: #ici je me sert de try
    Value = int(input("Tapez un nombre entre 1 et 10 : ")) #variable int avec entrée de saisie et message
except ValueError: #erreur de valeur
    print("Vous devez taper un nombre entre 1 et 10 !")
except KeyboardInterrupt: #erreur par contrôle + c
    print("Vous avez appuyé sur CRTL + C!")
else: #si la valeur est bien un nombre
    if (Value > 0) and (Value <=10): #si bien entre 1 et 10
        print("Vous avez tapé : ", Value)
    else: #si est en dehors de 1 et 10
        print("La valeur que vous avez tapée est incorrecte !")