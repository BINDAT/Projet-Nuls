Valeur1 = 100 #variable avec une valeur numérique
Valeur2 = float('inf') #ici une valeur float.
print('% e est plus petit que %E.' %(Valeur1, Valeur2)) #ici affichage en notation scientifique
print("%.3F est plus petit que %.2f." %(Valeur1,
Valeur2)) #affichage spécifique avec des valeurs avec affichage limite de nombre après virgule
print("%05d" %Valeur1) #ici affichage d'un nombre auto compléter par des 0 si plus petit que prévu le nombre sera mis en décimal sur 5 nombre