#include "stdafx.h"
#include "Figure.h"
#include <math.h>
const double PI = 3.14;

Triangle::Triangle(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

double Triangle::CalcPerimetr() {
	return a + b + c;
}

double Triangle::CalcSquare() {
	double p = CalcPerimetr() / 2;
	return sqrt(p*(p - a)*(p - b)*(p - c));
}

double Triangle::Get() {
	return a, b, c;
}

double Circle::CalcPerimetr() {
	return 2 * R * PI;
}

double Circle::CalcSquare() {
	return PI * R * R;
}

double Circle::Get() {
	return R;
}

Circle::Circle(int R):Figure() {
	this->R = R;
}

Triangle::Triangle() {
	a = 1;
	b = 1;
	c = 1;
}

/*double CustomFigure::CalcSquare() {
	return 
}*/