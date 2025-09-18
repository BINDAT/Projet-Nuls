class ForcerCapLong {
    public static void main(String[] args) {
        
    
//Ce code est trop lourd.
//Les variable supplémentaires sont inutiles.

    char cMinus1, cMajus1; // caractères minuscule et majuscule
    char cMinus2, cMajus2; // caractères minuscule et majuscule

    cMinus1 = 'R'; // initialisation du caractère minuscule 'R'
    cMajus1 = Character.toUpperCase(cMinus1); // conversion en majuscule 'R'
    System.out.println(cMajus1); // affichage du résultat 'R'

    cMinus2 = '3'; // initialisation du caractère minuscule '3'
    cMajus2 = Character.toUpperCase(cMinus2); // conversion en majuscule '3'
    System.out.println(cMajus2); // affichage du résultat '3'
    }
}