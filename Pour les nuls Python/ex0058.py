MyString = " Bonjour la Terre "
print(MyString.upper()) #affiche tout en majuscule
print(MyString.strip()) #retire les espaces superflus
print(MyString.center(21,"*"))#affiche en centre avec des * et un nombre limite
print(MyString.strip().center(21,"*")) #retire les espace superflus centre et ajoute des * dans un nombre limite
print(MyString.isdigit()) #questionne le fait si c'est une suite numérique
print(MyString.istitle()) #questionne le fait si c'est un titre
print(max(MyString)) #affiche la lettre avec la plus forte valeur 
print(MyString.split()) #affiche comme un tableau avec des séparation
print(MyString.split()[0]) #affiche comme un tableau mais une seule val ici un mot bonjour