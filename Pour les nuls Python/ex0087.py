class MyClass: # Classe de démonstration
    def DoAdd(self, Value1=0, Value2=0): # Méthode pour additionner deux valeurs
        Sum = Value1 + Value2 # Calcul de la somme
        print("La somme de {0} et {1} est {2}"
              .format(Value1, Value2, Sum)) # Affichage du résultat

MyInstance = MyClass() # Création d'une instance de MyClass
MyInstance.DoAdd(1, 4) # Appel de la méthode DoAdd avec des arguments