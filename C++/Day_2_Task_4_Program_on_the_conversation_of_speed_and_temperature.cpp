#include <iostream>
using namespace std;

void convertKmphToMph() {
    double kmph;
    cout << "Enter speed in kmph: ";
    cin >> kmph;

    if (kmph < 0) {
        cout << "Error: Speed cannot be negative!" << endl;
        return;
    }
    if (kmph > 300) {
        cout << "Error: Speed cannot exceed 300 kmph (186 mph)!" << endl;
        return;
    }

    double mph = kmph * 0.621371;  
    cout << "Speed in mph: " << mph << " mph" << endl;
}

void convertFahrenheitToCelsius() {
    double fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    if (fahrenheit < 0) {
        cout << "Error: Temperature cannot be negative!" << endl;
        return;
    }
    if (fahrenheit > 271) {
        cout << "Error: Temperature cannot exceed 271°F (133°C)!" << endl;
        return;
    }

    double celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << celsius << "°C" << endl;
}

int main() {
    int option;

    while (true) {
        cout << "Choose conversion:\n";
        cout << "1. Convert kmph to mph\n";
        cout << "2. Convert Fahrenheit to Celsius\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> option;

        switch (option) {
            case 1:
                convertKmphToMph();
                break;
            case 2:
                convertFahrenheitToCelsius();
                break;
            case 3:
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid option! Please enter 1, 2, or 3." << endl;
        }

        cout << endl;
    }

    return 0;
}
