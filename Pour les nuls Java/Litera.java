import java.util.Objects;

class Litera {
    private final String sTitre;
    private final String sAuteur;
    private final int iParution;

    public Litera(String sTitre, String sAuteur, int iParution) {
        this.sTitre = sTitre;
        this.sAuteur = sAuteur;
        this.iParution = iParution;

    }

    public String getTitre(){
        return sTitre;
    }

    public String getAuteur(){
        return sAuteur;
    }

    @Override
    public boolean equals(Object o){
        if (this == o) return true;
        if (o == null || getClass() != o.getClass()) return false;
        Litera Litera = (Litera) o;
        return Objects.equals(sTitre, Litera.sTitre) && Objects.equals(sAuteur, Litera.sAuteur);
    }

    @Override
    public int hashCode(){
        return Objects.hash(sTitre, sAuteur, iParution);
    }

    @Override
    public String toString(){
        return "Litera {" + 
                "sTitre='" + sTitre + '\'' +
                ", sAuteur='" + sAuteur + '\'' +
                ", iParution='" + iParution + '\'' +
                '}';
    }
}