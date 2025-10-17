switch (nMois) {
    case 1, 3, 5, 7, 8, 10, 12 -> nNbrJours = 31;
    case 4, 6, 9, 11 -> nNbrJours = 30;
    case 2 -> {
        System.out.print("Année bissextile (true/false)?");
        bSextile = clavier.nextBoolean();
        nNbrJours = (bSextile ? 29 : 28);
    }
};