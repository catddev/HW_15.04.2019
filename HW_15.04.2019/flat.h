#pragma once
#include <iostream>
#include<fstream>
using namespace std;

//класс Flat(квартира)
//	Проверка на равенство площадей квартир(операция = = )
//	Операцию присваивания одного объекта в другой(операция = )
//	Сравнение двух квартир по цене(операция > )

class flat {
private:
	double area;
	int price;
public:
	flat();
	flat(double area, int price);

	void setArea(double area);
	void setPrice(int price);

	double getArea();
	int getPrice();

	void print();

	void operator=(const flat &obj);
	bool operator==(flat obj);
	bool operator>(flat obj);
	bool operator<(flat obj);
};