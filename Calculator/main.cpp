#include <iostream>
#include <string.h>

// calculator project
// I could not get multiplication to work
// if "*" is entered as argv[2]
// it changes the value of argv[3]

using namespace std;

int main(int argc, char *argv[]) {
    if (argc == 3) {
        cerr << "Error: Incorrect amount of arguments."
        << endl;
        exit(1);
        // this function checks for the correct amount of arguments.
    }
    if (strspn(argv[1], "-1234567890.") != strlen(argv[1])) {
        cerr << "Error: Argument 1 is not a valid operand." << endl;
        exit(1);
        // this function checks if argv[1] is a valid number
    }
    char periodSign = '.';
    int periodCounter = 0;
    for (int i = 0; i < string(argv[1]).length(); i++) {
        if (string(argv[1])[i] == periodSign) {
            periodCounter++;
        }
    }
    if (periodCounter > 1) {
        cerr << "Error: Too many decimals in Argument 1." << endl;
        exit(1);
        // this function checks if argv[1] has too many decimals
    }
    char minusSign = '-';
    int minusCounter = 0;
    for (int i = 0; i < string(argv[1]).length(); i++) {
        if (string(argv[1])[i] == minusSign) {
            minusCounter++;
        }
    }
    if (minusCounter > 1) {
        cerr << "Error: Too many subtraction symbols in Argument 1." << endl;
        exit(1);
        // this function checks if argv[1] has too many subtraction symbols
    }
    if (strspn(argv[3], "-1234567890.") != strlen(argv[3])) {
        cerr << "Error: Argument 3 is not a valid operand." << endl;
        exit(1);
        // this function checks if argv[3] is a valid number
    }
    periodCounter = 0;
    for (int i = 0; i < string(argv[3]).length(); i++) {
        if (string(argv[3])[i] == periodSign) {
            periodCounter++;
        }
    }
    if (periodCounter > 1) {
        cerr << "Error: Too many decimals in Argument 3." << endl;
        exit(1);
        // this function checks if argv[3] has too many decimals
    }
    minusCounter = 0;
    for (int i = 0; i < string(argv[3]).length(); i++) {
        if (string(argv[3])[i] == minusSign) {
            minusCounter++;
        }
    }
    if (minusCounter > 1) {
        cerr << "Error: Too many subtraction symbols in Argument 3." << endl;
        exit(1);
        // this function checks if argv[3] has too many subtraction symbols
    }
    double firstNumber = atof(argv[1]), secondNumber = atof(argv[3]);
    if (string(argv[2]) == "/" && string(argv[3]) == "0") {
        cerr << "Error: Denominator cannot equal zero." << endl;
        return 0;
        // this function checks if there is a zero in the denominator
    }
    else if (string(argv[2]) == "/") {
        cout << (firstNumber / secondNumber) << endl;
        return 0;
        // this is the division function
    }
    else if (string(argv[2]) == "+") {
        cout << (firstNumber + secondNumber) << endl;
        return 0;
        // this is the addition function
    }
    else if (string(argv[2]) == "-") {
        cout << (firstNumber - secondNumber) << endl;
        return 0;
        // this is the subtraction function
    }
    else if (string(argv[2]) == "*") {
        cout << (firstNumber * secondNumber) << endl;
        return 0;
        // this multiplication function does not work
    }
    else {
        cerr << "Error: Argument 2 is not a valid operator.";
        exit(1);
        // this checks if argv[2] is a valid operator
    }
}