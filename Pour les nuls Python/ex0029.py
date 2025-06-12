One = int(input("Tapez un nombre entre 1 et 10 : "))
Two = int(input("Tapez un nombre entre 1 et 10 : ")) #Variables à entrée saisit avec affichage

if (One >= 1) and (One <= 10): #condition avec la var One en paramètre entre 1 et 10
    if (Two >= 1) and (Two <= 10): #condition avec la var Two en paramètre entre 1 et 10
        print("Votre nombre secret est : ", One * Two)
    else:
        print("La seconde valeur est incorrecte !")
else:
    print("La première valeur est incorrecte !")