#pragma once
#include <iostream>
#include <string>
#include "Exception.h"

using namespace std;

class Product
{
	int first;
	double second;
public:
	Product();
	Product(int, double);
	Product(const Product&);
	~Product();

	int GetFirst() const { return first; };
	double GetSecond() const { return second; };
	void SetFirst(int f) { first = f; };
	void SetSecond(double s) { second = s; };
	double power();

	Product& operator = (const Product&);
	friend istream& operator >> (istream&, Product&);
	friend ostream& operator << (ostream&, const Product&);
	operator string() const;

	Product& operator ++();
	Product operator ++(int);
	Product& operator --();
	Product operator --(int);
};