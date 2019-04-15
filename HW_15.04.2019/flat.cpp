#include "flat.h"

flat::flat()
{
	area = 0.0;
	price = 0;
}

flat::flat(double area, int price)
{
	this->area = area;
	this->price = price;
}

void flat::setArea(double area)
{
	this->area = area;
}

void flat::setPrice(int price)
{
	this->price = price;
}

double flat::getArea()
{
	return area;
}

int flat::getPrice()
{
	return price;
}

void flat::print()
{
	cout << "area: " << area << "; " << "price: $" << price << endl;
}

void flat::operator=(const flat &obj)
{
	area = obj.area;
	price = obj.price;
}

bool flat::operator==(flat obj)
{
	return (area==obj.area);
}

bool flat::operator>(flat obj)
{
	return(price > obj.price);
}

bool flat::operator<(flat obj)
{
	return(price < obj.price);
}
