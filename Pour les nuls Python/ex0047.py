import sys #importe la bibliothèque sys pour les fonctionnalités système
try: #ici je lance un try
    ##raise ValueError
    print("Exception levée") #ici le message est affiché
except ValueError: #ici except ne sert pas.
    print("Exception ValueError !")
    sys.exit()
finally: #ici finally est actif
    print("Prenez soin des détails de dernière minute.")

print("Ce code ne sera jamais exécuté")#est ce message est affiché.