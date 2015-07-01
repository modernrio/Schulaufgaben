#include "main.h"

int main() {
	Mann M1 = Mann("M1", 23);
	Mann M2 = Mann("M2", 22);

	Frau F1 = Frau("F1", 27);
	Frau F2 = Frau("F2", 24);

	M2.Heiraten(&F1);

	if (F1.IstVerheiratet()) {
		cout << F1.GetName() << " ist verheiratet" << endl;
	}
	if (M2.IstVerheiratet()) {
		cout << M2.GetName() << " ist der Ehemann" << endl;
	}

	//Versuch, die selbe Frau mit zwei Männern zu verheiraten
	M1.Heiraten(&F1);
	if (!M1.IstVerheiratet()) {
		//Fehlgeschlagen
		cout << M1.GetName() << " ist nicht verheiratet" << endl;
	}

	system("PAUSE");
	return 0;
}