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
    }#ici ont retrouve les données concernent Samuel la variable en '' et sa valeur en "" après : instructions terminée par ,  
}#fonction servant de tableau de données

for Item in Employes: #boucle servant à afficher le tableau
    print("%(Nom)s occupe la fonction de %(Fonction)s dans le service " \
        "%(Departement)s." %Employes[Item])