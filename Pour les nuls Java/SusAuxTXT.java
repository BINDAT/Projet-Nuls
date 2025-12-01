import java.io.File;

class SusAuxTXT {
    
    public static void main(String args[]) {
        
        File fDossier = new File(".");
        for (File file : fDossier.listFiles()){
            if (file.getName().endsWith(".txt")) {
                file.delete();
            }
        }
    }
}
