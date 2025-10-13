String apprecia; // appréciation de l'élève
description = clavier.next(); // lire une chaîne de caractères

switch (apprecia) { 
    case "Excellent": // apprecia vaut "Excellent"
        System.out.println('A');
        break; // fin du cas "Excellent" du switch
    case "Bien": // apprecia vaut "Bien"
        System.out.println('B');
        break; // fin du cas "Bien" du switch
    case "Moyen": // apprecia vaut "Moyen"
        System.out.println('C');
        break; // fin du cas "Moyen" du switch
}