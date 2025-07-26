for Item in Colors.keys(): #boucle Item avec en lien Colors keys pour rechercher dans un tableau
    print("{0} aime la couleur {1}."
          .format(Item, Colors[Item])) #affichage ciblé sur des éléments choisi et répété en boucle jusqu'à atteindre le dernier élément

Colors["Sarah"] = "Violet" #fait une update pour changer une donnée ici la couleur
Colors.update({"Harry": "Orange"}) #fait une update dans le tableau pour ajouter des données

for name, color in Colors.items():
    print("{0} aime la couleur {1}."
          .format(name, color))

del Colors["Sam"] #ici ont supprime des données du tableau
for name, color in Colors.items():
    print("{0} aime la couleur {1}."
          .format(name, color)) #ont affiche le tout

Colors.clear() #ici ont efface
len(Colors) #est ont compte 0 élément ici