/* Declares an integer array using static memory
 allocation and doing some basic stuff with it. */

#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main(int argc, char** argv)
{
    int arr[7] = { -45, 72, 1024, 0, 97, 42, -534 };
    
    for(int i=0; i<7; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    
    arr[2] = 768;
    *(arr+5) = 397;
    
    cout << endl;
    for(int i=0; i<7; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    
	return EXIT_SUCCESS;
}
