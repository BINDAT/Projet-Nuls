from collections import Counter #utilise collection en lien avec Counter

MyList = [1, 2, 3, 4, 1, 2, 3, 2, 1, 5] #ici une var tableau avec de vals numériques
ListCount = Counter(MyList) #reprend Counter pour l'affecter à la var ListCount, Counter avec en paramètre la var MyList
print(ListCount) #affiche la var ListCount qui a en mémoire la val de Counter qui contient le tableau MyList en paramètre
for ThisItem in ListCount.items(): #ici boucle for ThisItem avec en lien ListCount en paramètre .item() 
    print("L'élément : ", ThisItem[0], 
          " apparaît : ", ThisItem[1], " fois") #ici ont affiche est compte les deux premières vals du tableau puis avec la boucle les autres vals seront affichée et comptées 
print("La valeur 1 apparaît {0} fois."
      .format(ListCount.get(1))) #ici ont affecte précisément une val qui seras comptée