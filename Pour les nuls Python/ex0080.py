import queue #import du module queue
MyQueue = queue.Queue(3) #crée une file d'attente avec 3 espaces
print(MyQueue.empty()) #Vérifie si elle est vide
input("Appuyez sur une touche quand vous êtes prêt...")
MyQueue.put(1) #ajoute 1 à la file
MyQueue.put(2) # même chose ici mais pour 2
print(MyQueue.full()) #la ont contrôle pour savoir si c'est plein résultat est false
input("Appuyez sur une touche quand vous êtes prêt...")
MyQueue.put(3) #j'ajoute 3 dans la file
print(MyQueue.full()) #ici on contrôle pour savoir si c'est plein résultat est true
input("Appuyez sur une touche quand vous êtes prêt...")
print(MyQueue.get()) #je retire 1 de la file
print(MyQueue.empty()) #on contrôle si la file est vide résultat est false
print(MyQueue.full()) #on contrôle si la file est pleine résultat est false
input("Appuyez sur une touche quand vous êtes prêt...")
print(MyQueue.get()) #je retire 2 de la file
print(MyQueue.get()) #je retire 3 de la file