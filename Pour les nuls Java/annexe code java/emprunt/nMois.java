switch (nMois) {  // nMois est un entier
    case 1, 3, 5, 7, 8, 10, 12 -> nNbrJours = 31; // mois de 31 jours sauf février
    case 4, 6, 9, 11 -> nNbrJours = 30; // mois de 30 jours sauf février
    case 2 -> {
        System.out.print("Année bissextile (true/false)?"); // demander si l'année est bissextile
        bSextile = clavier.nextBoolean(); // lire la réponse
        nNbrJours = (bSextile ? 29 : 28); // affecter 29 ou 28 jours
    }
};