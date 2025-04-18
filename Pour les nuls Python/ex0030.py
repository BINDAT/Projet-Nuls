print("1. Oeufs")
print("2. Crêpes")
print("3. Gaufres")
print("4. Céréales")
MainChoice = int(input("Que voulez-vous au petit déjeuner ? "))

if (MainChoice == 2):
    Meal = "Crêpes"
elif (MainChoice == 3):
    Meal = "Gaufre"

if (MainChoice == 1):
    print("1. Galette au froment")
    print("2. Beignet")
    print("3. Galette de seigle")
    print("4. Crêpe nature")
    Pancake = int(input("Choisissez un type de crêpe : "))
    if (Pancake == 1):
        print("Vous avez choisi des oeufs avec une galette au froment.")
    elif (Pancake == 2):
        print("Vous avez choisi des oeufs avec des beignets.")
    elif (Pancake == 3):
        print("Vous avez choisi des oeufs avec une galette de seigle")
    elif (Pancake == 4):
        print("Vous avez choisi des oeufs avec une crêpe nature.")
    else:
        print("Nous avons des oeufs, mais pas ce type de crêpe.")

elif (MainChoice == 2) or (MainChoice == 3):
    