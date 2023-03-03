#include "Placement.h"

using namespace std;

Placement::Placement(float solde, std::string institution) : Actif(solde), _institution(institution)
{
}

std::string Placement::getInstitution()
{
    return _institution;
}

void Placement::afficherDetails(std::ostream& flux) const
{
    flux << "Institution: " << _institution << endl;
    Actif::afficherDetails(flux);
}
