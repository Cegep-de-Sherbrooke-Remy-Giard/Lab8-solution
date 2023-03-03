#include "CompteBanque.h"

using namespace std;

CompteBanque::CompteBanque(float solde, std::string noCompte, std::string institution) : Actif(solde), _noCompte(noCompte), _institution(institution)
{
}

string CompteBanque::getNoCompte() const
{
    return _noCompte;
}

string CompteBanque::getInstitution() const
{
    return _institution;
}

void CompteBanque::afficherDetails(ostream& flux) const
{
    flux << "Compte de banque" << endl;
    flux << "================" << endl;
    flux << "No compte: " << _noCompte << endl;
    flux << "Institution: " << _institution << endl;
    Actif::afficherDetails(flux);
}

string CompteBanque::getDescription() const
{
    return "Compte de Banque - " + _institution + " - " + _noCompte;
}
