#include <iostream>
#include <limits>
using namespace std;

int main() {
    double temperature;
    char scale;


    cout << "Enter the temperature value: ";
    while (!(cin >> temperature)) {

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a numeric value: ";
    }


    cout << "Choose the conversion scale (C for Celsius, F for Fahrenheit): ";
    cin >> scale;


    if (scale == 'C' || scale == 'c') {

        double fahrenheit = (temperature * 9 / 5) + 32;
        cout << "Converted temperature: " << fahrenheit << " F" << endl;
    } else if (scale == 'F' || scale == 'f') {

        double celsius = (temperature - 32) * 5 / 9;
        cout << "Converted temperature: " << celsius << " C" << endl;
    } else {

        cout << "Invalid scale selected. Please choose 'C' or 'F'." << endl;
    }

    return 0;
}
