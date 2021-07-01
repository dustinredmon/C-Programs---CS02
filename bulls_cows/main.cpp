#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> secretCode { 1,2,3,4 };
    vector<int> guess;
    int bulls = 0, cows = 0;
    int input;
    cout << "Enter 4 numbers (0-9) separated by spaces (press | to stop)" << endl;
    cin >> input;
    guess.push_back(input);
    while (cin >> input) guess.push_back(input);
    cout << secretCode[0];
    for (int i=0; i<4; i++){
        if (secretCode[i] == guess [i]) bulls += 1;
    }
    if (guess[0] == secretCode [1]) cows += 1;
    else if (guess[0] == secretCode [2]) cows += 1;
    else if (guess[0] == secretCode [3]) cows += 1;

    if (guess[1] == secretCode [0]) cows += 1;
    else if (guess[1] == secretCode [2]) cows += 1;
    else if (guess[1] == secretCode [3]) cows += 1;

    if (guess[2] == secretCode [0]) cows += 1;
    else if (guess[2] == secretCode [1]) cows += 1;
    else if (guess[2] == secretCode [3]) cows += 1;

    if (guess[3] == secretCode [0]) cows += 1;
    else if (guess[3] == secretCode [1]) cows += 1;
    else if (guess[3] == secretCode [2]) cows += 1;

    if (guess == secretCode)
        cout << "You guessed the secret code!" << endl;
    else cout << "Bulls: " << bulls << " Cows: " << cows << endl;
    return 0;
}