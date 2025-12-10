/*
* Ceci n'est pas du code réel :
*/

void afficher() {
    NumberFormat nfDevise = NumberFormat.getCompactNumberInstance();
    out.print("Le compte portant le nom ");
    out.print( "Aju" );
    out.print("et dont l'identificateur est ");
    out.print(9936);
    out.print("a un solde ");
    out.println(nfDevise.format(8734.00));
}