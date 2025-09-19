class MyExperiment {

    public static void main(String[] args) {
        char cMinus,cMajus;

        cMinus = 'R';
        cMajus = Character.toUpperCase(cMinus); // conversion en majuscule
        System.out.println(cMajus); // affiche 'R'

        cMinus = '3';
        cMajus = Character.toUpperCase(cMinus); // conversion en majuscule
        System.out.println(cMajus); // affiche '3'
    }    
}