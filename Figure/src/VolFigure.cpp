#include "stdafx.h"
#include "VolFigure.h"

double Cylinder::CalcVolume() {
	return height * figure->CalcSquare();
}

Cylinder::Cylinder(double height) {
	this->height = height;
}

void Cylinder::InitFigure(Figure* figure) {
	this->figure = CloneFigure(figure);
}


Cylinder::~Cylinder() {
	
}

CircleCylinder::CircleCylinder(double height) :Cylinder(height)
{
}

CircleCylinder::~CircleCylinder()
{
}

Figure* CircleCylinder::CloneFigure(Figure* figure)
{
	Circle* c = static_cast<Circle*>(figure);
	return new Circle(c->Get());
}

TriangleCylinder::TriangleCylinder(double height) :Cylinder(height) {
}

Figure* TriangleCylinder::CloneFigure(Figure* figure) {
	Triangle* t = static_cast<Triangle*>(figure);
	return new Triangle(t->Get);
}