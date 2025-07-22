MyTuple = ("Rouge", "Bleu", "Vert") #var avec liste
MyTuple #ici appel de fonction

MyTuple = MyTuple.__add__(("Violet",)) #ajoute un élément à une liste
print(MyTuple) #affiche la var

MyTuple = MyTuple.__add__(("Jaune",
                           ("Orange", "Noir"))) #ajoute un élément et sous élément à une liste
print(MyTuple[4]) #Montre la val sur sont cinquième élément

print(MyTuple[5]) #montre la val sur le sixième élément

print(type(MyTuple[5]) == tuple) #ici ont regarde si un sixième élément est stocké

print(MyTuple[5][0]) #montre spécifiquement le sixième élément sous sont premier sous élément 