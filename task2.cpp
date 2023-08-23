//Simple calculator

#include <iostream>

using namespace std;

int main() {
    double x,y;
    int operation;

    cout << "Enter the first number: ";
    cin >>x;

    cout << "Enter the second number: ";
    cin >>y;
   
    cout << "Choose an operation (1-Addition,2-substraction,3-multiplication and 4-division): ";
    cin >> operation;

    double output;

    switch (operation) {
        case 1:
            output=x+y;
            break;
        case 2:
            output= x-y;
            break;
        case 3:
            output= x*y;
            break;
        case 4:
            if (y!= 0) {
                output=x/y;
            } else {
                cout << "Error: Cannot divide by zero." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;
    }
 
    cout << "output: " <<output<< endl;

   
    return 0;
}
