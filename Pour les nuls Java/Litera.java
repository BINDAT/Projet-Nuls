import java.util.Objects; // importation de la classe Objects pour les méthodes equals et hashCode

class Litera {
    private final String sTitre; // déclaration des attributs privés et finals de la classe Litera pour le titre, l'auteur et l'année de parution
    private final String sAuteur; // déclaration des attributs privés et finals de la classe Litera pour le titre, l'auteur et l'année de parution
    private final int iParution; // déclaration des attributs privés et finals de la classe Litera pour le titre, l'auteur et l'année de parution

    public Litera(String sTitre, String sAuteur, int iParution) {
        this.sTitre = sTitre; // initialisation des attributs via le constructeur de la classe Litera
        this.sAuteur = sAuteur; // initialisation des attributs via le constructeur de la classe Litera
        this.iParution = iParution; // initialisation des attributs via le constructeur de la classe Litera

    }

    public String getTitre(){ // méthode getter pour obtenir le titre du livre
        return sTitre; // retourne le titre du livre
    }

    public String getAuteur(){ // méthode getter pour obtenir l'auteur du livre
        return sAuteur; // retourne l'auteur du livre
    }

    @Override // redéfinition de la méthode equals pour comparer deux objets Litera
    public boolean equals(Object o){
        if (this == o) return true; // vérifie si les deux références pointent vers le même objet
        if (o == null || getClass() != o.getClass()) return false; // vérifie si l'objet passé en paramètre est null ou d'une classe différente
        Litera Litera = (Litera) o; // cast de l'objet en paramètre vers un objet Litera
        return Objects.equals(sTitre, Litera.sTitre) && Objects.equals(sAuteur, Litera.sAuteur); // compare les titres et les auteurs des deux objets Litera
    }

    @Override // redéfinition de la méthode hashCode pour générer un code de hachage basé sur le titre et l'auteur
    public int hashCode(){ // génère un code de hachage pour l'objet Litera
        return Objects.hash(sTitre, sAuteur, iParution); // utilise la méthode hash de la classe Objects pour générer le code de hachage
    }

    @Override // redéfinition de la méthode toString pour fournir une représentation textuelle de l'objet Litera
    public String toString(){ // retourne une chaîne de caractères représentant l'objet Litera
        return "Litera {" + 
                "sTitre='" + sTitre + '\'' +
                ", sAuteur='" + sAuteur + '\'' +
                ", iParution='" + iParution + '\'' +
                '}'; // formatte les attributs de l'objet Litera dans une chaîne de caractères
    }
}