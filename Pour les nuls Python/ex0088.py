class MyClass:
    def PrintList1(*args):
        for Count, Item in enumerate(args):
            print("{0}. {1}".format(Count, Item))
    
    def PrintList2(**kwargs):
        for Name, Value in kwargs.items():
            print("{0} aime {1}".format(Name, Value))
        
MyClass.PrintList1("Rouge", "Bleu", "Vert")
MyClass.PrintList2(Georges="Rouge", Annie="Bleu",
                   Sarah="Vert")