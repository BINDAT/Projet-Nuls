MonEntreprise = {"Propriétaire": "Moi",
                 "Comptabilité": {151: "Martha",
                                  152: "Jean"},
                "Informatique": {251: "Annie",
                                 252: "Albert"},
                "Logistique": {351: "Gilles",
                               352: "Sylvie"}
                } #fonction tableau de val de chaîne de caractère et numérique
MonEntreprise

def DisplayDict(Dict): #constance avec en paramètre la var Dict
    for key, value in Dict.items(): #boucle for avec en valeur key et value qui reprend la var Dict en items
        if type(value) == dict: #ici ont reprend les valeurs de value avec un dictionnaire de créer.
            print(f"Le service {key} est composé de :") #ici ont reprend {key} pour afficher le service
            DisplayDict(value) #ici ont reprend les valeurs de value
        else:
            print(f"{value} est {key}") #et ici ont affiche le nom et le numéro de service

DisplayDict(MonEntreprise) #la ont appelle la fonction complète