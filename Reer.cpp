#include "Reer.h"

#include <iomanip>

using namespace std;

Reer::Reer(float solde, std::string institution, std::string numeroCompte, std::string echeance) : Placement(solde, institution), _numeroCompte(numeroCompte), _echeance(echeance) 
{
}

std::string Reer::getNumeroCompte() const
{
    return _numeroCompte;
}

std::string Reer::getEcheance() const
{
    return _echeance;
}

void Reer::afficherDetails(std::ostream& flux) const
{
    flux << "REER" << endl;
    flux << "====" << endl;
    flux << "Numéro de compte: " << _numeroCompte << endl;
    flux << "Échéance: " << _echeance << endl;
    Placement::afficherDetails(flux);
}

string Reer::getDescription() const
{   
    return "REER - " + _institution + " - " + _numeroCompte;
}
