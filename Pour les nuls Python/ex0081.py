import collections
MyDeque = collections.deque("abcdef", 10)
print("État initiale :")
for Item in MyDeque:
    print(Item, end=" ")
print("\r\n\r\nAjout et extension à droite")
MyDeque.append("h")
MyDeque.extend("ij")
for Item in MyDeque:
    print(Item, end=" ")
print("\r\nMyDeque contient {0} éléments."
      .format(len(MyDeque)))
print("\r\nPop à droite")
print("Pop de {0}".format(MyDeque.pop()))
for Item in MyDeque:
    print(Item, end=" ")
print("\r\n\r\nAjout et extension à gauche")
MyDeque.appendleft("a")
MyDeque.extendleft("bc")
for Item in MyDeque:
    print(Item, end=" ")
print("\r\nMyDeque contient {0} éléments."
      .format(len(MyDeque)))
print("\r\nPop à gauche")
print("Pop de {0}".format(MyDeque.popleft()))
for Item in MyDeque:
    print(Item, end=" ")
print("\r\n\r\nSuppression")
MyDeque.remove("a")
for Item in MyDeque:
    print(Item, end=" ")