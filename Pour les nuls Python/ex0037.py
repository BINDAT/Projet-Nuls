X = 1
Y = 1 #ici je créer les vars et leurs vals
print ('{:>4}'.format(''), end='') #j'affiche en boucle
for X in range(1, 11): #ici ont paramètre de 1 à 10 la boucle sur X
    print('{:>4}'.format(X), end='') #j'affiche le résultat
print()#j'affiche ici
for X in range(1,11): #ici je refait une boucle du premier nombre au dernier par X.
    print('{:>4}'.format(X), end='') #ici j'affiche le résultat
    while Y <= 10: #ici une boucle en condition sous et ou égale à 10
        print('{:>4}'.format(X * Y), end='') #ici ont affiche le résultat de X multiplié de Y
        Y +=1 #j'auto-incrémente la val de la var Y
    print() #j'affiche ici
    Y = 1 #je remet la val de la var Y à sa valeur initiale