#include <iostream>

using namespace std;

int main() {
    int grainsToGive = 0;
    int sumOfSq = 0;
    int prevSq = 1;
    cout << "How many grains of rice will the Emperor "
            "give to the inventor?" << endl;
    cin >> grainsToGive;
    for (int i = 1; sumOfSq < grainsToGive; i++) {
        if (sumOfSq == 0) {
            sumOfSq = 1; //compensating for the first square
        }
        else {
            sumOfSq += (prevSq + prevSq);
            prevSq = (prevSq + prevSq);
        }

        if (sumOfSq >= grainsToGive) {
            cout << "The Emperor will need " << i <<
            " squares to give the inventor at least "
            << grainsToGive << " grains of rice." << endl;
        }
    }
    return 0;
}




