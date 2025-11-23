// Ce code ne se compile pas
for (int nTour = 0 ; nTour < 10; nTour++) {
    out.print("J'ai mâché ");
    out.print(nTour);
    out.println(" fois !");
}

out.print(nTour); // La variable nTour n'existe plus.