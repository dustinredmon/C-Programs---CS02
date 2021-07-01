#include <iostream>

using namespace std;

int main() {
    int low = 1;
    int high = 100;
    while (low < high) {
        int half = (low + high) / 2;
        cout << "Are you thinking of a number greater than "
        << half << "? (Y/N): ";
        char answer;
        cin >> answer;
        if (answer == 'Y' || answer == 'y') low = half + 1;
        else high = half;
    }
    cout << "Your number is: " << low << endl;
    return 0;
}