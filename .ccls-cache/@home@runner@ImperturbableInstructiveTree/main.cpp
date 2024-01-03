#include <iostream>
#include <string>
using namespace std;

double FarenToCels(double faren) {
    return (faren - 32) * 5 / 9;
}

double CelsFarenTo(double cels) {
    return (cels * 9 / 5) + 32;
}

int main() {
    double celsius;
    double farrenheit;
    char repeat = ' ';

    cout << "This is a temperature app, specify fahrenheit or celsius convert to the other one...\n";

    while (true) {
        string choice;
        cout << "specify fahrenheit or celsius convert to the other one...\n";
        getline(cin, choice);

        if (choice == "fahrenheit") {
            cout << "Please enter Fahrenheit: ";
            cin >> farrenheit;
            cin.ignore(); // Ignore newline character
            double result1 = FarenToCels(farrenheit);
            cout << farrenheit << " Fahrenheit is " << result1 << " Celsius";
        }
        else if (choice == "celsius") {
            cout << "Please enter Celsius: ";
            cin >> celsius;
            cin.ignore(); // Ignore newline character
            double result2 = CelsFarenTo(celsius);
            cout << celsius << " Celsius is " << result2 << " Fahrenheit";
        }

        cout << "\nWould you like to enter another value y/n? ";
        cin >> repeat;
        cin.ignore(); // Ignore newline character
        if (repeat == 'y')
            continue;
        else
            break;
    } // End of loop

    return 0;
}
//this is the end of the program

//another commit