#include "Product.h"
#include <sstream>

Product::Product()
{
	first = 0;
	second = 0;
}

Product::Product(int f, double s)
{
	first = f;
	if (s < 1000)
		second = s;
	else
		throw Exception("Second is too big");
}

Product::Product(const Product& r)
{
	first = r.first;
	second = r.second;
}

Product::~Product()
{ }

double Product::power()
{
	return first * second * 10;
}

Product& Product::operator = (const Product& r)
{
	first = r.first;
	second = r.second;

	return *this;
}

istream& operator >> (istream& input, Product& m)
{
	cout << " first = "; input >> m.first;
	cout << " second = "; input >> m.second;
	if (m.second > 1000)
		throw Exception("Second is too big");
	cout << endl;

	return input;
}

ostream& operator << (ostream& output, const Product& l)
{
	output << string(l);
	return output;
}

Product::operator string() const
{
	stringstream p;
	p << " first = " << first << endl;
	p << " second = " << second << endl;
	return p.str();
}

Product& Product::operator ++()
{
	first++;
	return *this;
}

Product Product::operator ++(int)
{
	Product t(*this);
	second++;
	return t;
}

Product& Product::operator --()
{
	first--;
	return *this;
}

Product Product::operator --(int)
{
	Product t(*this);
	second--;
	return t;
}