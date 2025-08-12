class MyClass: #Création d'une classe MyClass
    MyVar = 0 #Variable MyVar initialisée à 0

MyInstance = MyClass() #Création d'une instance de MyClass

MyInstance.MyVar #Accès à la variable MyVar de l'instance MyInstance

print(dir(MyInstance)) #Liste des attributs et méthodes de l'instance MyInstance
help('__class__') #Affiche l'aide pour la variable spéciale __class__