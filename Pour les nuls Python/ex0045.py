TryAgain = True
while TryAgain:
    try:
        Value = int(input("Tapez un nombre entier : "))
    except ValueError:
        print("Vous devez taper un nombre entier !")
        try:
            DoOver = input("<essayez à nouveau (o/n) ?")
        except:
            print("Ok à la prochaine fois !")
            TryAgain = False
        else:
            if (str.upper(DoOver) == "N"):
                TryAgain = False
    except KeyboardInterrupt:
        print("Vous avez appuyez sur Ctrl+C !")
        print("A la prochaine fois !")
    TryAgain = False
else:
    print(Value)
    TryAgain = False