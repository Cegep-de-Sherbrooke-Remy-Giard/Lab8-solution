#pragma once

#include "Actif.h"
#include <string>

class Placement : public Actif
{
protected:
	Placement(float solde, std::string institution);
	std::string _institution;

public:
	std::string getInstitution();

	void afficherDetails(std::ostream& flux) const;
};