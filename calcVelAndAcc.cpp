/*
 A program to calculate the velocity and acceleration.
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

double pos(double t)
{
    return 3.4*cos(0.15*t)-0.9*sqrt(t)*pow(sin(0.26*t),2);
}

double vel(double t, double dt)
{
    return (pos(t+0.5*dt)-pos(t-0.5*dt))/dt;
}

double accel(double t, double dt)
{
    return ( pos(t + dt) - 2.*pos(t) + pos(t - dt) ) / pow(dt,2);
}

int main(int argc, char** argv)
{
    int Npoints = 200;
    double t0=0., t1=50., t, dt, tstep = (t1-t0)/(Npoints-1);
    std::ofstream outFile;
    
    cout << "Enter the value of dt: ";
    cin >> dt;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    	
    std::ostringstream fileName;  // allows to write into a string as into a file stream
    fileName << "results_dt=" << dt << ".dat";
    
    outFile.open(fileName.str().c_str()); // add .c_str() after str() if not using C++11
    if(outFile.is_open())
        cout << "outFile stream opened successfully." << endl;
    else
    {
        cout << "outFile stream failed to open!" << endl;
        return EXIT_FAILURE;
    }
    
    for(int i=0;i<Npoints;i++)
    {
		t = t0 + i*tstep;
        outFile << t << " " << pos(t) << " " << vel(t,dt) << " " << accel(t,dt) << endl;
    }
    
	outFile.close();
	
	return EXIT_SUCCESS;
}
