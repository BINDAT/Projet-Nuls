def PrintBleu():
    print("Vous avez choisi bleu ! \r\n")
def PrintRouge():
    print("Vous avez choisi rouge ! \r\n")
def PrintOrange():   
    print("Vous avez choisi orange ! \r\n")
def PrintJaune():
    print("Vous avez choisi jaune ! \r\n") #Ici ont a défini toute les fonctions et leurs instructions

ColorSelect = {
    0: PrintBleu,
    1: PrintRouge,
    2: PrintOrange,
    3: PrintJaune
    
} #La ont fait une sorte de tableau d'appel des fonctions auquel ont attribue une valeur numérique

Selection = 0 #Ici ont prépare la variable avec une valeur de base
while (Selection != 4): #La ont fait une boucle while dans que 4 n'est pas saisit elle continue à l'infinie
    print("0. Bleu")
    print("1. Rouge")
    print("2. Orange")
    print("3. Jaune")
    print("4. Quitter") #Ici les instructions d'affichages
    Selection = int(input("Sélectionnez une option de couleur : ")) #la variable reprend la saisit clavier pour l'enregistrer
    if (Selection >= 0) and (Selection <4): #Ici dans que la variable est égale ou supérieur à 0 et inférieur à 4
        ColorSelect[Selection]() #La valeur de Selection et reprise dans ColorSelect qui lui vas 
        #se charger de reprend la valeur numérique attribuée à la bonne fonction