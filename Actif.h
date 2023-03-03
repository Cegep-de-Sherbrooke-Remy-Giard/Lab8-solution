#pragma once

#include <iostream>

class Actif
{
protected:
	float _solde;

public:
	Actif(float solde);

	float getSolde() const;

	void afficherDetails(std::ostream& flux) const;
	virtual std::string getDescription() const = 0;
};
