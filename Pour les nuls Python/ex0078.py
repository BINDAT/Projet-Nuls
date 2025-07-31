def PrintBleu():
    print("Vous avez choisi bleu ! \r\n")
def PrintRouge():
    print("Vous avez choisi rouge ! \r\n")
def PrintOrange():   
    print("Vous avez choisi orange ! \r\n")
def PrintJaune():
    print("Vous avez choisi jaune ! \r\n")

ColorSelect = {
    0: PrintBleu,
    1: PrintRouge,
    2: PrintOrange,
    3: PrintJaune
    
}