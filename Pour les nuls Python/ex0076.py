for Item in Colors.keys():
    print("{0} aime la couleur {1}."
          .format(Item, Colors[Item]))

Colors["Sarah"] = "Violet"
Colors.update({"Harry": "Orange"})

for name, color in Colors.items():
    print("{0} aime la couleur {1}."
          .format(name, color))

del Colors["Sam"]
for name, color in Colors.items():
    print("{0} aime la couleur {1}."
          .format(name, color))

Colors.clear()
len(Colors)