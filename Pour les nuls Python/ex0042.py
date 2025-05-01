import sys
try:
    File = open("myfile.txt")
except IOError as e:
    for Entry in dir(e):
        if(not Entry.startswith("_")):
            try:
                print(Entry, " = ", e.__getattribute__(Entry))
            except AttributeError:
                print("Attribut", Entry, " non accessible.")
else:
    print("Le fichier a bien été ouvert.")
    File.close()