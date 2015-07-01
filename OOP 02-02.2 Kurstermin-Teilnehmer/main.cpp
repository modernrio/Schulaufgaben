#include "main.h"

int main() {
	Termin TW, TN, TK, Mathe, Englisch;

	Teilnehmer Niklas, Max, Chris, Nikolai, Kevin;

	Niklas.Anmelden(TW);
	Niklas.Abmelden(TK);
	Max.Anmelden(TN);
	Chris.Anmelden(Englisch);
	Kevin.Anmelden(Mathe);

	Niklas.Abmelden(TK);

	return 0;
}