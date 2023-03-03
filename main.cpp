#include <clocale>
#include <iostream>

#include "CompteBanque.h"
#include "Reer.h"
#include "BilanComptable.h"

using namespace std;

int main(void) {
	setlocale(LC_ALL, "");
	cout.imbue(locale(""));

	BilanComptable bilan("Joseph Léveillée");
	bilan.ajouterActif(new CompteBanque(1000.25f, "852126-ES2", "Desjardins"));
	bilan.ajouterActif(new Reer(10232.12f, "Desjardins", "6745894-RR1", "30 janvier 2025"));

	cout << bilan << endl;

	return 0;
}