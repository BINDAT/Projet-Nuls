MyStack = [] #var tableau vide
StackSize = 3 #var avec val elle servira de limite
def DisplayStack(): #ici une fonction d'affichage
    print("État courant de la pile :")
    for Item in MyStack: #boucle Items qui prend les vals du tableau
        print(Item) #affiche les vals
def Push(Value): #function Push qui prendras Value en paramètre
    if len(MyStack) < StackSize: #ici la boucle se termine ou bout de 3 tours len compte
        MyStack.append(Value) #reprend le dernier objet
        print(f"{Value} ajouté") #affiche toutes les vals
    else:
        print("La pile est pleine !")
def Pop():
    if len(MyStack) > 0:
        Removed = MyStack.pop()
        print(f"{Removed} supprimé de la pile")
    else:
        print("La pile est vide.")
Push(1)
Push(2)
Push(3)
DisplayStack()
input("Appuyez sur une touche quand vous êtes prêt...")
Push(4)
DisplayStack()
input("Appuyez sur une touche quand vous êtes prêt...")
Pop()
DisplayStack()
input("Appuyez sur une touche quand vous êtes prêt...")
Pop()
Pop()
Pop()
DisplayStack()