Formatted = "{:d}" #format normal dans la var pour afficher un val
print(Formatted.format(7000)) #valeur afficher avec format
Formatted = "{:,d}" #format nombres décimaux
print(Formatted.format(7000))
Formatted ="{:^15,d}" #format avec nombre décimaux centré sur 15 caractères
print(Formatted.format(7000))
Formatted = "{:*^15,d}" #nombre décimaux centré avec des * sur 15 caractères
print(Formatted.format(7000))
Formatted = "{:*^15.2f}" #nombre décimaux sous format float centré sur 15 caractères avec *
print(Formatted.format(7000))
Formatted = "{:>15X}" #format hexadécimaux mis sur la droit sur 15 caractères
print(Formatted.format(7000))
Formatted = "{:*<#15x}" #format hexadécimaux mis sur la gauche sur 15 caractères avec *
print(Formatted.format(7000))
Formatted = "une {1} {0} et un {2} {0}." #format avec texte est pointant des valeurs pour affichage
print(Formatted.format("rouge", "voiture", "camion"))