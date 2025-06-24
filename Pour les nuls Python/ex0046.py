import sys #importe la bibliothèque sys pour les fonctionnalités système
try: #ici je lance un try
    raise ValueError #ici raise fait sauter le message
    print("Exception levée") #message sauté
except ValueError: #ici except et actif
    print("Exception ValueError !")
    sys.exit()
finally: #Et finally est actif aussi
    print("Prenez soin des détails de dernière minute.")

print("Ce code ne sera jamais exécuté") #ici le message n'est pas affiché