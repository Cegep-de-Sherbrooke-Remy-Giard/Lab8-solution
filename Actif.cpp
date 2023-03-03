#include "Actif.h"

using namespace std;

Actif::Actif(float solde) : _solde(solde)
{
}

float Actif::getSolde() const
{
    return _solde;
}

void Actif::afficherDetails(ostream& flux) const
{
    flux << "Solde: " << _solde << "$" << endl;
}
