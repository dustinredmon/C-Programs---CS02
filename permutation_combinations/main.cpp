#include <iostream>

using namespace std;

int factorial(int x) {
    int y = 1;
    int z = x;
    int fact;
    for (x = x - 1; x > 0; x--) {
        y = y * x;
    }
    fact = y * z;
    return fact;
}

int main() {
    double choice = 0, aMinusB, permutation, combination;
    int a , b;
    cout << "Would you like to perform a permutation or combination?" << endl;
    cout << "Enter 1 for permutation, or 2 for combination: " << endl;
    cin >> choice;
    if (choice != 1 && choice != 2){
        cerr << "Invalid input. Please enter a 1 or 2." << endl;
        exit(1);
    }
    cout << "Enter a value for a." << endl;
    cin >> a;
    if (cin.fail()){
        cerr << "Not a valid integer!" << endl;
        exit(1);
    }
    cout << "Enter a value for b." << endl;
    cin >> b;
    if (cin.fail()) {
        cerr << "Not a valid integer!" << endl;
        exit(1);
    }
    if (a < 0 || b < 0){
        cerr << "A or B cannot be a negative number." << endl;
        exit(1);
    }
    if (a < b){
        cerr << "The value of A cannot be less than the value of B." << endl;
        exit(1);
    }
    aMinusB = a - b;
    permutation = factorial(a) / factorial(aMinusB);
    combination = permutation / factorial(b);
    if (choice ==1)
        cout << "P(" << a << "," << b << ") = " << permutation << endl;
    else if (choice == 2)
        cout << "C(" << a << "," << b << ") = " << combination << endl;
    return 0;
}