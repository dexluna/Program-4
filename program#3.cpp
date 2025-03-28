#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    // Prompt user for input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    // Determine the largest number
    double largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // Display the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}
