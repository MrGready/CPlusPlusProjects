#include <cstdlib>
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double radius, circum, area;

	cout << "pi = " << M_PI << endl;

	cout << "Enter a radius in meters: ";
	cin >> radius;

	circum = 2*M_PI*radius;
	area = M_PI*pow(radius,2);

	cout << "Radius: " << radius << " m" << endl;
	cout << "Circumference: " << circum << " m" << endl;
	cout << "Area: " << area << " m^2" << endl;
 
	return 0;
}
