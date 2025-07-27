Colors = {"Sam": "Bleu", "Annie": "Rouge",
          "Sarah": "Jaune"} #Var Tableau contenant des entiers
Colors #appel de la fonction

for Item in Colors.keys():
    print("{0} aime la couleur {1}."
          .format(Item, Colors[Item])) #affiche les éléments du tableau en boucle
print(len(Colors)) #ici ont vois le nombres d'item dans le tableau

Colors["Sarah"] = "Violet" #ici ont modifie une val
Colors.update({"Harry": "Orange"}) #la ont rajoute une val
print(Colors.update == Colors) #A voir
print(len(Colors)) #ont recompte les éléments

for name, color in Colors.items():
    print("{0} aime la couleur {1}."
          .format(name, color)) #affiche les éléments du tableau à nouveau
print(len(Colors)) #ont compte les éléments à nouveau

del Colors["Sam"] #ont supprime ici une val
for name, color in Colors.items():
    print("{0} aime la couleur {1}."
          .format(name, color)) #affiche les élément encore
print(len(Colors)) #recompte encore les éléments du tableau

Colors.clear() #ont remet le compte à 0
len(Colors) #ici ont affiche le compte ré-initialiser