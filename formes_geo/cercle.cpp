#include "cercle.h"

Cercle::Cercle():Figure()
{
	rayon = 0;
}

Cercle::Cercle(int inX, int inY, int inRayon) : Figure(inX, inY)
{
	rayon = inRayon;
}

Cercle::Cercle(const Cercle& inCercle):Figure(inCercle)
{
	rayon = inCercle.rayon;
}
Cercle::~Cercle()
{

}

void Cercle::setRayon(int inRayon)
{
  rayon = inRayon;
}

int Cercle::getRayon() const
{
	return rayon;
}
float Cercle::CalculerPerimetre() const
{
	return 2 * Pi*rayon;
}
float Cercle::CalculerAire() const
{
	return Pi * rayon*rayon;
}
void Cercle::Selectionner(int inX,int inY)
{
	float rayonF = (float)rayon;
	if ((((inX - (x+rayonF))*(inX - (x + rayonF))) + ((inY - (y+rayonF))*(inY - (y + rayonF))))/(rayonF*rayonF) <= 1)
	{
		estSelectionne = true;
	}
}
