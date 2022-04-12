#include <iostream>

using namespace std;

int smallRooms, largeRooms, initialCost;

double taxCost, totalCost;

int main() {
    cout << "How many small rooms will you need cleaned? ";
    
    cin >> smallRooms;
    
    cout << "How many large rooms will you need cleaned? ";
    
    cin >> largeRooms;
    
    initialCost = smallRooms * 25 + largeRooms * 35;
    
    taxCost = initialCost * 0.06;
    
    totalCost = initialCost + taxCost;
    
    cout << "Estimate for carpet cleaning service" << endl << "Number of small rooms: " << smallRooms
        << endl << "Number of large rooms: " << largeRooms << endl << "Price per small room: $25" << endl
        << "Price per large room: $35" << endl << "Cost: $" << initialCost << endl << "Tax: $" << taxCost << endl
        << "=================================" << endl << "Total estimate: $" << totalCost << endl <<
        "This estimate is valid for the next 30 days";
    
    return 0;
}