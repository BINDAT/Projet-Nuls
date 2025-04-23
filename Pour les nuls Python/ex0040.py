import sys
try:
    File = open("myfile.txt")
except IOError as e:
    print("Erreur lors de l'ouverture du fuchier ! \r\n" + "Numéro de l'erreur : {0}\r\n".format(e.errno)+"Texte de l'erreur : {0}".format(e.strerror))
else:
    print("Le fichier a bien été ouvert.")
    File.close()