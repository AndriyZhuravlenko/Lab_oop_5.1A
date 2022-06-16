#include "Product.h"
#include <iostream>
using namespace std;

int main()
{
	Product x;
	try {
		cin >> x;
		cout << x << endl;
	}
	catch (Exception e)
	{
		cout << e.what() << endl;
	}

	cout << "power = " << x.power() << endl;
	
	Product z(1, 1);
	cout << z << endl;
	cout << z++ << endl;
	cout << z << endl;
	cout << ++z << endl;
	cout << z << endl;

	return 0;
}