import sys #importe une bibliothèque pour les fonction système
try: #ici ont lance une fonction try
    File = open("myfile.txt") #pour ouvrir le fichier texte
except IOError as e: #si erreur cela seras afficher ici
    for Arg in e.args:
        print(Arg)
else: #sinon les instructions seront suivis ici
    print("Le fichier a bien été ouvert.")
    File.close() #est le fichier seras fermer la.