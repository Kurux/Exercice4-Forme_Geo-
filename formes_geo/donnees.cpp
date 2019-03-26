#include "donnees.h"


Donnees::Donnees()
{
	for (int cpt = 0; cpt<maxFigures; cpt++)
	{
		lesFigures[cpt] = NULL;
	}
}

Donnees::~Donnees()
{
	for (int cpt = 0; cpt<maxFigures; cpt++)
	{
		if (lesFigures[cpt] != NULL)
		{
			delete lesFigures[cpt];
			lesFigures[cpt] = NULL;
		}
	}
}

bool Donnees::AjouterFigure(Figure* inFigure)
{
	int cpt = 0;
	bool ajoutReussi = false;
	while (cpt<maxFigures && lesFigures[cpt] != NULL)
	{
		cpt++;
	}
	if (cpt < maxFigures)
	{
		lesFigures[cpt] = inFigure;
		ajoutReussi = true;
	}
	return ajoutReussi;
}

Figure* Donnees::ObtenirFigure(int inIndice)
{
	if (inIndice < maxFigures && lesFigures[inIndice] != NULL)
	{
		return lesFigures[inIndice];
	}
	return NULL;
}
