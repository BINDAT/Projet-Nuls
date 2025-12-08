import java.text.NumberFormat;
import java.util.Scanner;
import java.util.Locale;
import java.util.Currency;

class AchatDeviseAutre {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        clavier.useLocale(Locale.US); // Sélection autre devise
        double dPrixUnit;
        boolean bTaxable;
        double dTotal;
        String sTotalPropre;

        NumberFormat nfDevise = NumberFormat.getCurrencyInstance(Locale.US);

        System.out.print("Unit price: ");
        dPrixUnit = clavier.nextDouble();
        bTaxable = true; /* keyboard.nextBoolean(); */

        if (bTaxable) { dTotal = dPrixUnit * 1.05;
            } else { dTotal = dPrixUnit;
        }

        sTotalPropre = nfDevise.format(dTotal);
        System.out.print("Total: ");
        System.out.println(sTotalPropre);

        // La suite pour tests avec la classe Locale
        Locale currentLocale = Locale.getDefault();
        System.out.println("========");
        System.out.print("Locale: ");
        System.out.print(currentLocale.getDisplayName());

        Currency currentCurrency = Currency.getInstance(currentLocale);
        NumberFormat currencyFormatter = NumberFormat.getCurrencyInstance(currentLocale);
        System.out.print("Currency: ");
        System.out.println(currentCurrency.getDisplayName());
        System.out.println(sTotalPropre);
        System.out.println(currencyFormatter.format(dTotal));

        clavier.close();
    }
}