Colors = ["Rouge", "Orange", "Jaune", "Vert", "Bleu"] #var tableau de val
print(*Colors, sep='\n')#affichage en nouvelle ligne de chaque val de la var

for Item in Colors: print(Item.rjust(8),sep='\n') #boucle for de nom Item en paramètre avec la var Colors et un affichage

print('\n'.join(Colors)) #un affichage avec un saut de ligne sur chaque val de la var Colors en paramètre de join

print('Premier : {0}\nDeuxième : {1}'.format(*Colors)) #affichage de vals ciblées de la var Color en pointée avec un saut de ligne