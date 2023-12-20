#include <iostream>
#include "TList.h"
#include "TPolinom.h"
using namespace std;


void PrintMenu() {
    cout << "Options:\n";
    cout << "1. Enter the polynomial\n";
    cout << "2. Print the polynomial\n";
    cout << "3. Add the polynomial\n";
    cout << "4. Multiply the polynomial by a number\n";
    cout << "5. Exit\n";
}


TPolinom ReadPolinom() {
    cout << "   >>";
    string str;
    getline(cin, str);
    return TPolinom(str);
}


int main()
{
    TPolinom p1, p2, result;
    int choice;
    double coef;
    while (true) {
        PrintMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch (choice) {
        case 1:
            p1 = ReadPolinom();
            break;
        case 2:
            cout << "Polynomial: " << p1.ToString() << endl;
            break;
        case 3:
            cout << "Second polynomial:\n";
            p2 = ReadPolinom();
            result = p1 + p2;
            cout << "sum = " << result.ToString() << endl;
            break;
        case 4:
            cout << "Enter the number:";
            cin >> coef;
            result = p1 * coef;
            cout << "Product = " << result.ToString() << endl;
            break;
        case 5:
            return 0;
        default:cout << "\n";

        }
    }
}