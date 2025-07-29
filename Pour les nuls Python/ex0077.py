MonEntreprise = {"Propriétaire": "Moi",
                 "Comptabilité": {151: "Martha",
                                  152: "Jean"},
                "Informatique": {251: "Annie",
                                 252: "Albert"},
                "Logistique": {351: "Gilles",
                               352: "Sylvie"}
                }
MonEntreprise

def DisplayDict(Dict):
    for key, value in Dict.items():
        if type(value) == dict:
            print(f"Le service {key} est composé de :")
            DisplayDict(value)
        else:
            print(f"{value} est {key}")

DisplayDict(MonEntreprise)