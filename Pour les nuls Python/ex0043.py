try:
    Value = int(input("Tapez un nombre entre 1 et 10 : "))
except ValueError:
    print("Vous devez taper un nombre entre 1 et 10 !")
except KeyboardInterrupt:
    print("Vous avez appuyé sur CRTL + C!")
else:
    if (Value > 0) and (Value <=10):
        print("Vous avez tapé : ", Value)
    else:
        print("La valeur que vous avez tapée est incorrecte !")