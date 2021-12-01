#ifndef VOLFIGURE_H_INCLUDED
#define VOLFIGURE_H_INCLUDED

#include "Figure.h"
class VolFigure
{
public:
	virtual double CalcVolume() = 0;
};

class Cylinder : public VolFigure {
private:
	Figure * figure;
	double height;

protected:
	Cylinder(double);
	void InitFigure(Figure*);
	virtual Figure* CloneFigure(Figure* f) = 0;

public:
	virtual ~Cylinder();
	virtual double CalcVolume();
};

class CircleCylinder : public Cylinder
{
protected:
	CircleCylinder(double);
	virtual Figure* CloneFigure(Figure* f);
public:
	virtual ~CircleCylinder();
};

class TriangleCylinder : public Cylinder {
protected:
	TriangleCylinder(double);
	virtual Figure* CloneFigure(Figure* f);
public:
	virtual ~TriangleCylinder();
};

#endif // !VOLFIGURE_H_INCLUDED