Colors = {"Sam": "Bleu", "Annie": "Rouge",
          "Sarah": "Jaune"} #Var Tableau contenant des entiers
Colors #appel de la fonction

for Item in Colors.keys():
    print("{0} aime la couleur {1}."
          .format(Item, Colors[Item]))
print(len(Colors))

Colors["Sarah"] = "Violet"
Colors.update({"Harry": "Orange"})
print(Colors.update == Colors) #A voir
print(len(Colors))

for name, color in Colors.items():
    print("{0} aime la couleur {1}."
          .format(name, color))
print(len(Colors))

del Colors["Sam"]
for name, color in Colors.items():
    print("{0} aime la couleur {1}."
          .format(name, color))
print(len(Colors))

Colors.clear()
len(Colors)