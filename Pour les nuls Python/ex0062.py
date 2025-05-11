Employes = {
    'Monique' : {
        'Fonction': "Designer",
        'Nom': "Monique",
        'Departement': "Ingénierie"
    },
    'Samuel': {
        'Fonction': "Programmeur",
        'Nom': "Samuel",
        'Departement': "DSI"
    }
}

for Item in Employes:
    print("%(Nom)s occupe la fonction de %(Fonction)s dans le service " \
        "%(Departement)s." %Employes[Item])