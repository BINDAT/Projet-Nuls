TryAgain = True #Var booléen contient True
while TryAgain: #execute TryAgain en boucle while
    try: #fonction try
        Value = int(input("Tapez un nombre entier : ")) #affiche un message et capture la saisit clavier
    except ValueError: #en cas d'erreur
        print("Vous devez taper un nombre entier !")
        try: #try pour le choix
            DoOver = input("<essayez à nouveau (o/n) ?") #var avec capture de saisit
        except: #si ne veut pas continuer
            print("Ok à la prochaine fois !")
            TryAgain = False #stop ici
        else: 
            if (str.upper(DoOver) == "N"): #prend la val ici et la met en upper
                TryAgain = False #stop ici
    except KeyboardInterrupt: #en cas d'interruption par clavier
        print("Vous avez appuyez sur Ctrl+C ! ")
        print("A la prochaine fois !")
        TryAgain = False #stop ici
    else:
        print(Value)
        TryAgain = False #stop ici