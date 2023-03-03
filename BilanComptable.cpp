#include "BilanComptable.h"
#include <iomanip>

using namespace std;

BilanComptable::BilanComptable(std::string nomClient) : _nomClient(nomClient)
{
	_nbActif = 0;
	_actifs = new Actif*[5];
}

void BilanComptable::ajouterActif(Actif* actif)
{
	_actifs[_nbActif] = actif;
	_nbActif++;
}

std::ostream& operator<<(std::ostream& flux, BilanComptable& bilan)
{
	flux << "Bilan Comptable" << endl;
	flux << "===============" << endl;
	flux << "Propriétaire: " << bilan._nomClient << endl << endl;

	flux << "Actifs" << endl;
	flux << "------" << endl;

	flux << showbase;

	float sommeActifs = 0;
	for (int i = 0; i < bilan._nbActif; i++) {
		Actif* actif = bilan._actifs[i];

		flux << setw(50) << left << actif->getDescription();
		flux << setw(25) << right << put_money(actif->getSolde() * 100);
		flux << endl;

		sommeActifs += actif->getSolde();
	}

	flux << setw(75) << right << "--------------" << endl;
	flux << setw(55) << right << "Total: " << setw(20) << put_money(sommeActifs * 100) << endl;

	return flux;
}
