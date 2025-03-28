#include <iostream>
using namespace std;

int main() {
    double grades[4];
    double average;

    // Prompt user for input and validate
    for (int i = 0; i < 4; i++) {
        while (true) {
            cout << "Enter quarter " << i + 1 << " grade (0-100): ";
            cin >> grades[i];

            if (cin.fail() || grades[i] < 0 || grades[i] > 100) {
                cout << "Invalid input. Please enter a number between 0 and 100." << endl;
                cin.clear(); // Clear error flag
                cin.ignore(10000, '\n'); // Ignore remaining input
            } else {
                break; // Exit loop if input is valid
            }
        }
    }

    // Calculate average
    double sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += grades[i];
    }
    average = sum / 4;

    // Display average
    cout << "The average of the four quarter grades is: " << average << endl;

    return 0;
}
