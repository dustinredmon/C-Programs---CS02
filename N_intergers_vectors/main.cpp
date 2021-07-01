#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myVector;
    int numSum = 0;
    int input;
    int sum = 0;
    cout << "Enter the number of values you want the sum of:" << endl;
    cin >> numSum;
    cout << "Enter a list of numbers serperated by spaces (press | to stop):" << endl;
    cin >> input;
    myVector.push_back(input);
    while (cin >> input) myVector.push_back(input);
    if (myVector.size() < input) {
        cerr << "The number of values you want to sum "
                "exceeds the number of values that was entered." << endl;
        exit(1);
    }
    for (int i = 0; i < numSum; ++i) sum += myVector[i];
    cout << "The sum of the first " << numSum << " numbers ( ";
    for (int i = 0; i < numSum; ++i) cout << myVector[i] << ' ';
    cout << ") is " << sum << "." << endl;
    return 0;
}