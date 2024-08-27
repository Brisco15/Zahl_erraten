#include <iostream>


using namespace std;

int main()
{
	
	////Deklaration

	int zufallszahl = 57;// rand() % 100 + 1;//zufallzahl zwischen 1 und 100 generiert
	int ratezahl = -1;
	char nochmal = 'j';
	int versuche = 0;
	
	//srand(time(0));
	
	do 
	{ 
		//Versuche auf 0 setzen
		versuche = 0;

		//Zufallszahl erzeugen
		srand(time(NULL));
		zufallszahl = rand();

		//zufallszahl in den bereich von 1 bis 100 anpassen
		zufallszahl = zufallszahl % 100 + 1;

		
		do
		{
			//Eingabe
			cout << "Ihre Ratezahl  zwischen 1 und 100 : " << endl;
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