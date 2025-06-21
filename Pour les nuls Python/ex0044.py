try: #ici une fonction try
    Value1 = int(input("Tapez le premier nombre : "))
    Value2 = int(input("Tapez le second nombre : ")) #les vars avec entrée de saisies et messages
    Output = Value1 / Value2 #ici Output qui prend en vals les vars Value1 et Value2
except ValueError: #ici une exception sur la valeur
    print("Vous devez taper un nombre entier !")
except KeyboardInterrupt: #ici une exception sur les interruption
    print("Vous avez appuyé sur CRTL + C!")
except ArithmeticError: #ici une erreur d'arithmétie 
    print("Une erreur de math non définie s'est produite.")
except ZeroDivisionError: #ici au cas ou ils y a une division par zéro
    print("Tentative de division par zéro !") 
else:
    print(Output) #ici un affichage de Output sois le résultat de Value1 et Valu2 divisées