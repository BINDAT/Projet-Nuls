import sys
try:
    File = open("myfile.txt")
except IOError as e:
    for Arg in e.args:
        print(Arg)
else:
    print("Le fichier a bien été ouvert.")
    File.close()