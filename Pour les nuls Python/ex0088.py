class MyClass: #Cette classe contient des méthodes pour afficher des listes
    def PrintList1(*args): #Cette méthode affiche une liste d'éléments
        for Count, Item in enumerate(args): #Cette opération parcourt la liste des éléments
            print("{0}. {1}".format(Count, Item)) #Cette opération affiche l'élément courant avec son index

    def PrintList2(**kwargs): #Cette méthode affiche une liste d'éléments avec des noms
        for Name, Value in kwargs.items(): #Cette opération parcourt la liste des éléments
            print("{0} aime {1}".format(Name, Value)) #Cette opération affiche l'élément courant avec son nom

MyClass.PrintList1("Rouge", "Bleu", "Vert") #Cette opération appelle la méthode PrintList1 avec trois arguments
MyClass.PrintList2(Georges="Rouge", Annie="Bleu",
                   Sarah="Vert") #Cette opération appelle la méthode PrintList2 avec trois arguments