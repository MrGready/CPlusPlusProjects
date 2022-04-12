/*
 A program that prompts the user for their full name and 
 then prints a phrase as output to the screen.
 */

#include <cstdlib>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv)
{
    char fullname[100];
    
    cout << "Please enter your full name: ";
    cin.getline(fullname,sizeof(fullname)); // forces reading past first word; can also use a std::string variable instead.
    cout << "Hello, " << fullname << "!" << endl;
    
	return EXIT_SUCCESS;
}
