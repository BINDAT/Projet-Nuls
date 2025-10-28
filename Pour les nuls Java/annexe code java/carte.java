//Code préliminaire - NON FINALISÉ
int carte, total = 0;

System.out.println("Carte    Total");

while (total < 21) {
    carte = monGenAlea.nextInt(10) + 1;

    System.out.print(carte);
    System.out.print("       ");
    System.out.println(total);
}

if (total == 21) {
    System.out.println("Vous gagnez ;-)");
} else {
    System.out.println("Vous perdez :-(");
}