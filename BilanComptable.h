#pragma once

#include <iostream>
#include "Actif.h"

class BilanComptable
{
private:
	std::string _nomClient;
	Actif** _actifs;
	int _nbActif;

public:
	BilanComptable(std::string nomClient);

	void ajouterActif(Actif* actif);

	friend std::ostream& operator<<(std::ostream& flux, BilanComptable& bilan);
};
