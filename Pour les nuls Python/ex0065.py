from string import Template
X = 1
Y = 2
Sommes = Template ("$Valeur1 + $Valeur2 = $Valeur3")
print(Sommes.substitute(Valeur1 = X, Valeur2 = Y,
                        Valeur3 = X + Y))