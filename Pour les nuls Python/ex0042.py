import sys #importe une bibliothèque pour les fonction système
try: #ici ont lance une fonction try
    File = open("myfile.txt") #pour ouvrir le fichier texte
except IOError as e: #si erreur cela seras afficher ici
    for Entry in dir(e):
        if(not Entry.startswith("_")):
            try:
                print(Entry, " = ", e.__getattribute__(Entry))
            except AttributeError:
                print("Attribut", Entry, " non accessible.")
else: #sinon les instructions seront suivis ici
    print("Le fichier a bien été ouvert.")
    File.close() #est le fichier seras fermer la.