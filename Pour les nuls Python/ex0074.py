MyTuple = MyTuple.__add__(("Violet",)) #ajoute un élément à une liste
MyTuple #appel la var

MyTuple = MyTuple.__add__(("Jaune",
                           ("Orange", "Noir"))) #ajoute un élément et sous élément à une liste
MyTuple[4] #Montre la val sur sont cinquième élément

MyTuple[5] #montre la val sur le sixième élément (ici les sous éléments)

type(MyTuple[5]) == tuple #ici ont regarde si un sixième élément est stocké

MyTuple[5][0] #montre spécifique le sixième élément sous sont premier sous élément 