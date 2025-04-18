One = int(input("Tapez un nombre entre 1 et 10 : "))
Two = int(input("Tapez un nombre entre 1 et 10 : "))

if (One >= 1) and (One <= 10):
    if (Two >= 1) and (Two <= 10):
        print("Votre nombre secret est : ", One * Two)
    else:
        print("La seconde valeur est incorrecte !")
else:
    print("La première valeur est incorrecte !")