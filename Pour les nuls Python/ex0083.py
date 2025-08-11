class MyClass: #Création d'une classe MyClass
    MyVar = 0 #Variable MyVar initialisée à 0

MyInstance = MyClass() #Création d'une instance de MyClass

MyInstance.MyVar #Accès à la variable MyVar de l'instance MyInstance

print(dir(MyInstance))
help('__class__')