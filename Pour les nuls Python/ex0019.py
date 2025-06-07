def Hello4(ArgCount, *VarArgs): #Ici marquer le nombre d'argument puis l'argument ainsi Hello4(1,"Coucou")
    print("Vous avez passé ", ArgCount, " argument(s).") #Affiche le nombre d'argument que vous avez renseignez
    for Arg in VarArgs: #Boucle autant de fois que renseigner
        print(Arg) #affiche ce que vous avez écrit