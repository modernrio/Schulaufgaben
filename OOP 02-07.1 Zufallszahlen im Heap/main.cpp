#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	//Zufallsgenerator mit der Zeit initialisieren
	srand(timeGetTime());

	int anzahl;

	cout << "Anzahl Zufallszahlen: ";
	cin >> anzahl;

	int* zufallszahlen = new int[anzahl];

	//Zufallszahlen bestimmen
	for (int i = 0; i < anzahl; i++) {
		zufallszahlen[i] = rand();
	}

	//Zufallszahlen ausgeben
	for (int i = 0; i < anzahl; i++) {
		cout << "Zahl " << i << ": " << zufallszahlen[i] << endl;
	}

	delete[] zufallszahlen;

	system("PAUSE");
	return 0;
}