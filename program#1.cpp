#include <iostream>
#include <string> 
using namespace std;

int main() {

    // dclare variables to store user's name and birth details
    string name; 
    int birthYear, birthMonth, birthDay; 

    // define current date constants
    const int currentYear = 2025;
    const int currentMonth = 2; 
    const int currentDay = 26; 

    // prompt user to input their name
    cout << "Enter your name: "; 
    cin >> name;  // read user's name from input


    // prompt user to input their birth year, month, and day
    cout << "Enter your birth year: "; 
    cin >> birthYear; // read birth year from input


    cout << "Enter your birth month: "; 
    cin >> birthMonth; // read birth month from input

    cout << "Enter your birth day: ";   
    cin >> birthDay;  // read birth day from input


    // calculate age using a boolean expression 
    int age = currentYear - birthYear - ((currentMonth < birthMonth) || 
     (currentMonth == birthMonth && currentDay < birthDay));  



    // display the calculated age
    cout << endl;
    cout << "Your name is " << name << " and you are " << age << endl;

    return 0;
}
