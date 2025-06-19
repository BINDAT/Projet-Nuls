import sys #importe une bibliothèque pour les fonction système
try: #ici ont lance une fonction try
    File = open("myfile.txt") #pour ouvrir le fichier texte
except IOError as e: #si erreur cela seras afficher ici
    print("Erreur lors de l'ouverture du fichier ! \r\n" + "Numéro de l'erreur : {0}\r\n".format(e.errno)+"Texte de l'erreur : {0}".format(e.strerror))
else: #sinon les instructions seront suivis ici
    print("Le fichier a bien été ouvert.")
    File.close() #est le fichier seras fermer la.