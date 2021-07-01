#include <iostream>

using namespace std;

int main() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "Please enter three names separated by spaces: " << endl;
    cin >> num1 >> num2 >> num3;

    int smallest = 0;
    int middle = 0;
    int biggest = 0;

    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
        if (num2 <= num3) {
            middle = num2;
            biggest = num3;
        }
        else {
            middle = num3;
            biggest = num2;
        }
    }
    else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
        if (num1 <= num3) {
            middle = num1;
            biggest = num3;
        }
        else {
            middle = num3;
            biggest = num1;
        }
    }
    else {
        smallest = num3;
        if (num1 <= num2) {
            middle = num1;
            biggest = num2;
        }
        else {
            middle = num2;
            biggest = num1;
        }
    }

    cout << "Here are your numbers in numerical order: " << smallest << ", " << middle << ", " << biggest << endl;
    return 0;
}