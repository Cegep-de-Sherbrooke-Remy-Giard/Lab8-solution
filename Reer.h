#pragma once

#include "Placement.h"
#include <string>

class Reer : public Placement
{
private:
	std::string _numeroCompte;
	std::string _echeance;

public:
	Reer(float solde, std::string institution, std::string numeroCompte, std::string echeance);

	std::string getNumeroCompte() const;
	std::string getEcheance() const;

	void afficherDetails(std::ostream& flux) const;
	std::string getDescription() const;
};

