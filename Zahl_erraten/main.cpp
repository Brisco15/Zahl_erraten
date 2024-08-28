#include <iostream>


using namespace std;

int main()
{
	
	////Deklaration

	int zufallszahl = 57;// rand() % 100 + 1;//zufallzahl zwischen 1 und 100 generiert
	int ratezahl = -1;
	char nochmal = 'j';
	int versuche = 0;
	int zufallszahl_obere_grenze = 0;
	int zufallszahl_untere_grenze = 0;
	
	//srand(time(0));
	
	do 
	{ 
		//zufallszahl grenze eingeben
		cout << "Geben Sie Ihre zufallszahlsunteregrenze : " << endl;
		cin >> zufallszahl_untere_grenze;
		cout << "Gebenen Sie Ihre zufallszahlsobereregrenze : " << endl;
		cin >> zufallszahl_obere_grenze;
		//Versuche auf 0 setzen
		versuche = 0;

		

		//Zufallszahl erzeugen
		srand(time(NULL));
		zufallszahl = rand();

		//zufallszahl in den bereich  anpassen
		zufallszahl = zufallszahl % (zufallszahl_obere_grenze - zufallszahl_untere_grenze + 1 ) + zufallszahl_untere_grenze;
		

		
		do
		{
			//Eingabe
			
			cout << "Ihre Ratezahl ist zwischen " << zufallszahl_untere_grenze << " und " << zufallszahl_obere_grenze << " : " << endl;
			cin >> ratezahl;

			//Versuche inkrementieren
			versuche++;

			//Verarbeitung
			//Ausgabe
			if (ratezahl < zufallszahl)

				cout << "Die ratezahl ist Kleiner als die zufallzahl : " << endl;

			if (ratezahl > zufallszahl)

				cout << "Die ratezahl ist Größer als die zufallzahl " << endl;

			if (ratezahl == zufallszahl)
				cout << "Die ratezahl entspricht der zufallzahl : " << endl;
			
		}
			while (ratezahl != zufallszahl);

		    //Ausgabe der Versuche
		    cout << "Sie haben : " << versuche <<  " Versuche benoetigt " << endl;

			//neues Spiel
			cout << "neue Spiel anfangen(J/N) : " ;
			cin >> nochmal;
			cout << endl;
			
			
			
	}
	while (nochmal == 'j' || nochmal == 'J');

	

	
	return 0;
}

