/* Prompts the user for an array length and then
 declares a double array of that length using
 dynamic memory allocation.  The array is populated
 with a simple formula in terms of the index i:
 sqrt(i+2). */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv)
{
    int arrLength;
    
    cout << "Please enter a length for the array of doubles: ";
    cin >> arrLength;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    double* arr = new double[arrLength];
    
    for(int i=0; i<arrLength; i++)
    {
        arr[i] = sqrt(i+2.0);
    }
    
    for(int i=0; i<arrLength; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
	
	delete[] arr;
    
	return EXIT_SUCCESS;
}
