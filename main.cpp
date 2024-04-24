#include <iostream>

using namespace std;


int add(int num1, int num2);
int subtract(int num1, int num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

int main() {
    int choice, num1, num2;
    double result;
    char cont;

    do {

        cout << "\nMenu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Enter your choice: ";
        cin >> choice;


        cout << "Enter two integers: ";
        cin >> num1 >> num2;

        switch (choice) {
            case 1:
                result = add(num1, num2);
                cout << "The sum is: " << result << endl;
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "The difference is: " << result << endl;
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "The product is: " << result << endl;
                break;
            case 4:
                result = divide(num1, num2);
                if (result == -1) {
                    cout << "The second integer is zero. Divide by zero." << endl;
                } else {
                    cout << "The quotient is: " << result << endl;
                }
                break;
            default:
                cout << "Invalid choice." << endl;
        }

        cout << "Press 'y' or 'Y' to continue: ";
        cin >> cont;
    } while (cont == 'y' || cont == 'Y');

    cout << "Exiting program." << endl;

    return 0;
}


int add(int num1, int num2) {
    return num1 + num2;
}


int subtract(int num1, int num2) {
    return num1 - num2;
}


double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 == 0) {
        return -1;
    } else {
        return num1 / num2;
    }
}
