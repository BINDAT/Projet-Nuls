class MyClass():
    Greeting = ""
    def SayHello(self):
        print("Bonjour {0}".format(self.Greeting))
    
MyClass.Greeting = "Elsa"
MyClass.Greeting

MyInstance = MyClass()
MyInstance.SayHello()