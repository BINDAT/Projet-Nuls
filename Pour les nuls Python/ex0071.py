Colors = ["Rouge", "Orange", "Jaune", "Vert", "Bleu"]
print(*Colors, sep='\n')

for Item in Colors: print(Item.rjust(8),sep='\n')

print('\n'.join(Colors))

print('Premier : {0}\nDeuxième : {1}'.format(*Colors))