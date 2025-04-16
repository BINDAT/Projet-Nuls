def Hello4(ArgCount, *VarArgs):
    print("Vous avez passé ", ArgCount, " argument(s).")
    for Arg in VarArgs:
        print(Arg)