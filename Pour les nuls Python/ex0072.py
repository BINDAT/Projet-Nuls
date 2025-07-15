from collections import Counter

MyList = [1, 2, 3, 4, 1, 2, 3, 2, 1, 5]
ListCount = Counter(MyList)
print(ListCount)
for ThisItem in ListCount.items():
    print("L'élément : ", ThisItem[0], 
          " apparaît : ", ThisItem[1], " fois")
print("La valeur 1 apparaît {0} fois."
      .format(ListCount.get(1)))