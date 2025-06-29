String1 = "Bonjour la Terre"
String2 = "Ici Python" #Variables est valeurs en chaîne de caractères.
print(String1[0])#affiche la première lettre
print(String1[0:5]) #affiche de la première à la cinquième lettres
print(String1[:5]) #affiche de la première à la cinquième lettres
print(String1[6:]) #affiche à partir de la sixième lettre
String3 = String1[:6] + String2[:6] #addition les valeurs
print(String3) #affiche les 6 lettres de String1 et String2
print(String2[:7]*5) #affiche les 7 lettres de String2 répétées 5 fois