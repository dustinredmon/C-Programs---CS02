#include <iostream>

using namespace std;

int main() {
    string name1 = "";
    string name2 = "";
    string name3 = "";

    cout << "Please enter three words separated by spaces: " << endl;
    cin >> name1 >> name2 >> name3;

    string smallest = "";
    string middle = "";
    string biggest = "";

    if (name1 <= name2 && name1 <= name3) {
        smallest = name1;
        if (name2 <= name3) {
            middle = name2;
            biggest = name3;
        }
        else {
            middle = name3;
            biggest = name2;
        }
    }
    else if (name2 <= name1 && name2 <= name3) {
        smallest = name2;
        if (name1 <= name3) {
            middle = name1;
            biggest = name3;
        }
        else {
            middle = name3;
            biggest = name1;
        }
    }
    else {
        smallest = name3;
        if (name1 <= name2) {
            middle = name1;
            biggest = name2;
        }
        else {
            middle = name2;
            biggest = name1;
        }
    }

    cout << "Here are your words listed in alphabetical order: " << smallest << ", " << middle << ", " << biggest << endl;
    return 0;
}