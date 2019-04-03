#ifndef FigureH
#define FigureH

#include <string>
using namespace std;

const float Pi=(float)3.1416;

class Figure
{
protected:
	int x;	//coin supérieur gauche
	int y;
	bool estSelectionne;

public:
	Figure();
	Figure(int x, int y);
	Figure(const Figure&);
	virtual ~Figure();
	int getX() const;
	int getY() const;
	void setPoint(int X, int Y);
	void setX(int);
	void setY(int);
	bool EstSelectionne();	
	void Deselectionner();
	virtual int getRayon() const;
	virtual int getCote() const;
	virtual void setRayon(int);
	virtual void setCote(int);
	virtual float CalculerPerimetre() const=0;
	virtual float CalculerAire() const=0;
	virtual void Selectionner(int inX,int inY)=0;
};
#endif