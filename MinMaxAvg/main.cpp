#include <iostream>

using namespace std;

int main() {
    double mn = 0, mx = 0, avg = 0, sum = 0;
    int numb = 0;
    cout << "How many values do you have to enter?" << endl;
    cin >> numb;
    int array[numb]; //number of elements
    cout << "Please enter your " << numb << " values:" << endl; //enter values
    for (int i = 0; i < numb; i++) {
        cin >> array[i]; // puts values in array
    }
    for (int i = 0; i < numb; i++) {
        sum += array[i]; //sum of array
    }
    avg = sum / numb; //average of array
    mn = array[0];
    mx = array[0];
    for (int i = 1; i < numb; i++) {
        if (mn > array[i]) {
            mn = array[i]; //minimum
        }
        else if (mx < array[i]) {
            mx = array[i]; //maximum
        }
    }

    cout << "Minimum: " << mn << endl;
    cout << "Average: " << avg << endl;
    cout << "Maximum: " << mx << endl;

    return 0;

}