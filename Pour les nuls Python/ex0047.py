import sys
try:
    ##raise ValueError
    print("Exception levée")
except ValueError:
    print("Exception ValueError !")
    sys.exit()
finally:
    print("Prenez soin des détails de dernière minute.")

print("Ce code ne sera jamais exécuté")