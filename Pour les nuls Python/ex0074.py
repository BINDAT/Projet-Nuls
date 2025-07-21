MyTuple = MyTuple.__add__(("Violet",)) #ajoute un élément à une liste
MyTuple #appel la var

MyTuple = MyTuple.__add__(("Jaune",
                           ("Orange", "Noir"))) #ajoute un élément et sous élément à une liste
MyTuple[4] #Montre la var sur sont cinquième élément

MyTuple[5]

type(MyTuple[5]) == tuple

MyTuple[5][0]