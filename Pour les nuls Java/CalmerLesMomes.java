class CalmerLesMomes /*class du nom CalmerLesMomes avec ses instructions*/{
    
    public static void main(String[] args) /*appel une fonction public static void du nom de main*/ {
        int nBouleGom;
        int nMome;
        int nBoulesMome; /*Créer des var int sans attributions de val*/

        nBouleGom = 30;
        nMome = 4; /*Attribution de val à la var */
        nBoulesMome = nBouleGom / nMome; /*Reprend ici 2 var en division pour faire la val de la var*/

        System.out.print("Chaque enfant reçois ");
        System.out.print(nBoulesMome); /*Affichage de la val de la var*/
        System.out.println(" boules de gomme"); /*Affichage*/

    }
}