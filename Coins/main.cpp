#include <iostream>

using namespace std;

int main() {
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int dollars = 0;
    cout << "How many pennies do you have?" << endl;
    cin >> pennies;
    cout << "How many nickels do you have?" << endl;
    cin >> nickels;
    cout << "How many dimes do you have?" << endl;
    cin >> dimes;
    cout << "How many quarters do you have?" << endl;
    cin >> quarters;
    cout << "How many dollar bills do you have?" << endl;
    cin >> dollars;
    if (pennies == 0)
        cout << "You do not have any pennies." << endl;
    else if (pennies == 1)
        cout << "You have " << pennies << " penny." << endl;
    else cout << "You have " << pennies << " pennies." << endl;
    if (nickels == 0)
        cout << "You do not have any nickels." << endl;
    else if (nickels == 1)
        cout << "You have " << nickels << " nickel." << endl;
    else cout << "You have " << nickels << " nickels." << endl;
    if (dimes == 0)
        cout << "You do not have any dimes." << endl;
    else if (dimes == 1)
        cout << "You have " << dimes << " dime." << endl;
    else cout << "You have " << dimes << " dimes." << endl;
    if (quarters == 0)
        cout << "You do not have any quarters." << endl;
    else if (quarters == 1)
        cout << "You have " << quarters << " quarter." << endl;
    else cout << "You have " << quarters << " quarters." << endl;
    if (dollars == 0)
        cout << "You do not have any dollar bills." << endl;
    else if (dollars == 1)
        cout << "You have " << dollars << " dollar." << endl;
    else cout << "You have " << dollars << " dollar bills." << endl;
    cout << "The value of all your coins is "
    << ((nickels * 5) + (dimes * 10) + (quarters * 25) + (dollars * 100) + pennies)
    << " cents." << endl;
    return 0;
}