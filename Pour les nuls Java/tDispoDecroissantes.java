class DispoDecroissantes {
    public static void main(String args[]) {
        int statutCh[] = {1, 4, 0, 2, 2, 1, 3, 0, 2};

        for (int nCham = 9; nCham >= 0; nCham--){
            if (statutCh[nCham] == 0) {
                System.out.print("La chambre ");
                System.out.print(nCham);
                System.out.println(" est libre..");
            }
        }
    }    
}
