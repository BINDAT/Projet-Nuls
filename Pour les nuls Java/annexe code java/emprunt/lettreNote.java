char lettreNote;
lettreGrade =
    clavier.findWithinHorizon(".",0).charAt(0); // lire un caractère seul

switch (lettreNote) {
    case 'A':
        out.println("Excellent");
        break; // fin du cas 'A' du switch
    case 'B':
        out.println("Bien");
        break; // fin du cas 'B' du switch
    case 'C':
        out.println("Moyen");
        break; // fin du cas 'C' du switch
}