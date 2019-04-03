#include "Figure.h"

Figure::Figure()
{
	x = 0;
	y = 0;
	estSelectionne = false;
}

Figure::Figure(int inX, int inY)
{
	x = inX;
	y = inY;
	estSelectionne = false;
}

Figure::Figure(const Figure& inFigure)
{
	x = inFigure.x;
	y = inFigure.y;
	estSelectionne = inFigure.estSelectionne;
}
Figure::~Figure()
{

}

int Figure::getX() const
{
	return x;
}

int Figure::getY() const
{
	return y;
}

bool Figure::EstSelectionne()
{
	return estSelectionne;
}

void Figure::setPoint(int inX, int inY) 
{
	x = inX;
	y = inY;
}

void Figure::setX(int inX)
{
	x=inX;
}

void Figure::setY(int inY)
{
	y=inY;
}

void Figure::Deselectionner()
{
	estSelectionne = false;
}
int Figure::getRayon() const
{
	return 0;
}
int Figure::getCote() const
{
	return 0;
}
void Figure::setRayon(int inRayon)
{

}
void Figure::setCote(int inCote)
{

}
/*float Figure::CalculerPerimetre() const
{
	return 0;
}
float Figure::CalculerAire() const
{
	return 0;
}
void Figure::Selectionner(int inX, int inY)
{

}*/

