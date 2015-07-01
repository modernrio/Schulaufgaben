#include <string>
#include <iostream>

using namespace std;

#define ANZAHL 3

int main() {
	//Deklaration und Initialisierung
	//einer string-Variablen
	string mytext = "Uwe Homm";
	cout << "Inhalt von mytext: " << mytext << endl;
	cout << "Der String mytext hat die Länge " << mytext.length() << endl;
	cout << "Die Adresse lautet: 0x" << hex << &mytext << dec << endl;
	cout << "****************************************************\n";
	//Deklaration und Initialisierung eines string-Arrays
	string array[ANZAHL] = { "erster String", "zweiter String", "dritter String" };
	//Strings ausgeben
	for (int i = 0; i < ANZAHL; i++)
		cout << array[i] << endl;
	//Neue Strings in Array einlesen
	for (int i = 0; i < ANZAHL; i++)
	{
		cout << i + 1 << " String: ";
		cin >> array[i];
	}
	//Eingegebene Strings ausgeben
	for (int i = 0; i < ANZAHL; i++)
		cout << array[i] << endl;
	//Stringverkettung; mehrere Strings hintereinander ausgeben
	cout << array[0] + array[1] + array[2] << endl;
	//Stringvariablen einander zuweisen und aneinander hängen
	string neu;
	neu = mytext;
	neu += "/Lehrer ";
	cout << neu << endl;
	neu += array[0];
	cout << neu << endl;
	//Strings miteinander vergleichen
	if (array[0] == array[1])
		cout << "Die Strings array[0] und array[1] sind identisch!" << endl;
	else if (array[0] < array[1])
		cout << "Der String array[0] kommt im Alphabet vor array[1]" << endl;
	else
		cout << "Der String array[0] kommt im Alphabet nach array[1]" << endl;

	//Weitere nützliche Funktionen
	//****************************
	cout << "***************************" << endl;
	//Einfügen eines Teilstrings
	neu.insert(4, "Klaus ");
	cout << neu << endl;
	//Ab dem 4. Zeichen 6 Zeichen löschen
	neu.erase(4, 6);
	cout << neu << endl;
	//Suchen von Teilstrings
	cout << "Originalstring: " << neu << endl;
	int pos = neu.find("Homm");
	cout << "\'Homm\' gefunden an der Position " << pos << endl;
	//Ersetzen; Stringlängen können unterschiedlich sein
	cout << "Ersetze \'Homm\'" << endl;
	neu.replace(pos, 4, "Seeler");
	cout << neu << endl;

	string name = "BeruFLiche Schulen Groß-GeraU";
	cout << "Inhalt von \"name\": " << name << endl;
	name[4] = 'f';
	//Die Methode length() ermittelt die Anzahl von Zeichen in einem String
	cout << "Der String \"name\" ist " << name.length() << " Zeichen lang!" << endl;
	//Das erste Zeichen hat den Index 0
	//daher hat das letzte Zeichen den Index 'Länge vom String' - 1
	name[name.length() - 1] = 'u';
	//Alternativ kann mit der Methode at() gearbeitet werden.
	name.at(5) = 'l'; //Äquivalent zu: name[5] = 'l';
	cout << "Inhalt von \"name\": " << name << endl;

	system("PAUSE");
	return 0;
}