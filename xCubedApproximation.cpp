/*
 A program to calculate a numerical derivative of x^3.
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>  // string stream; similar to
#include <limits>

using std::cout;
using std::cin;
using std::endl;

double f(double x)
{
    return pow(x,3);
}

double dfdxExact(double& x)
{
    return 3 * pow(x,2);
}

double dfdxForward(double x, double dx)
{
    return ( f(x + dx) - f(x) ) / dx;
}

int main(int argc, char** argv)
{
    int steps = 100;
    double x, dx, dfdx, factor = 0.7;
    std::ofstream outFile;
    
    cout << "Enter a value of x: ";
    cin >> x;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout << "Enter an initial value of Delta x: ";
    cin >> dx;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
    std::ostringstream fileName;  // allows to write into a string as into a file stream
    fileName << "xcubed_x=" << x << "_dx0=" << dx << ".dat";
    
    outFile.open(fileName.str()); // add .c_str() after str() if not using C++11
    if(outFile.is_open())
        cout << "outFile stream opened successfully." << endl;
    else
    {
        cout << "outFile stream failed to open!" << endl;
        return EXIT_FAILURE;
    }
    
    for(int i=0;i<steps;i++)
    {
        dfdx = dfdxForward(x,dx);
        outFile << dx << " " << dfdx << endl;
        dx *= factor;
    }
    
	outFile.close();
	
    cout << "Approx: " << dfdx << endl;
    cout << "Exact: " << dfdxExact(x) << endl;
    
	return EXIT_SUCCESS;
}
