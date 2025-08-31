import os

print(os.getcwd()) # Affiche le répertoire courant

DirList = os.listdir() # Liste des fichiers et dossiers dans le répertoire courant
print(DirList) # Affiche la liste des fichiers et dossiers
print("TestFile.csv" in 
      DirList) # Vérifie si "TestFile.csv" est dans la liste