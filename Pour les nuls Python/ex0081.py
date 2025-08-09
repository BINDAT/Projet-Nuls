import collections #import du module collections
MyDeque = collections.deque("abcdef", 10) #création de la var MyDeque avec une capacité maximale de 10
print("État initiale :")
for Item in MyDeque: #boucle sur les éléments de MyDeque
    print(Item, end=" ") #affichage des éléments de MyDeque
print("\r\n\r\nAjout et extension à droite")
MyDeque.append("h")
MyDeque.extend("ij")
for Item in MyDeque: #boucle sur les éléments de MyDeque
    print(Item, end=" ") #affichage des éléments de MyDeque
print("\r\nMyDeque contient {0} éléments."
      .format(len(MyDeque))) #affichage du nombre d'éléments dans MyDeque
print("\r\nPop à droite")
print("Pop de {0}".format(MyDeque.pop())) #suppression d'un élément à droite
for Item in MyDeque: #boucle sur les éléments de MyDeque
    print(Item, end=" ") #affichage des éléments de MyDeque
print("\r\n\r\nAjout et extension à gauche")
MyDeque.appendleft("a")
MyDeque.extendleft("bc")
for Item in MyDeque: #boucle sur les éléments de MyDeque
    print(Item, end=" ") #affichage des éléments de MyDeque
print("\r\nMyDeque contient {0} éléments."
      .format(len(MyDeque)))
print("\r\nPop à gauche")
print("Pop de {0}".format(MyDeque.popleft()))
for Item in MyDeque: #boucle sur les éléments de MyDeque
    print(Item, end=" ") #affichage des éléments de MyDeque
print("\r\n\r\nSuppression")
MyDeque.remove("a") #suppression de l'élément "a"
for Item in MyDeque: #boucle sur les éléments de MyDeque
    print(Item, end=" ") #affichage des éléments de MyDeque