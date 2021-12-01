#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

class Figure
{
public:
	virtual double CalcSquare() = 0;
	virtual double CalcPerimetr() = 0;
	virtual ~Figure();
	virtual double Get() = 0;
};

class Triangle : public Figure
{
private:
	double a;
	double b;
	double c;

public:
	Triangle();
	Triangle(double, double, double);
	virtual ~Triangle();
	virtual double CalcSquare();
	virtual double CalcPerimetr();

	virtual double Get();
};

class Circle : public Figure {
private:
	double R;
public:
	Circle(int);

	virtual ~Circle();

	virtual double CalcSquare();
	virtual double CalcPerimetr();

	virtual double Get();

};

class CustomFigure : public Figure {
private:
	double A;
	double B;
	double C;
	double R;
public:
	CustomFigure() {
		A = 3;
		B = 3;
		C = 3;
		R = 2;
	};
	virtual double CalcSquare();
};


#endif // !FIGURE_H_INCLUDED