#pragma once

#include "Actif.h"
#include <string>
#include <iomanip>

class CompteBanque : public Actif
{
private:
	std::string _noCompte;
	std::string _institution;

public:
	CompteBanque(float solde, std::string noCompte, std::string institution);

	std::string getNoCompte() const;
	std::string getInstitution() const;

	void afficherDetails(std::ostream& flux) const;
	std::string getDescription() const;
};

