#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, x1a, x1b, x2;
    cout << "Enter a value for a:" << endl;
    cin >> a;
    cout << "Enter a value for b:" << endl;
    cin >> b;
    cout << "Enter a value for c:" << endl;
    cin >> c;
    if (a == 0 && b == 0) {
        cerr << "Error: Not a quadratic equation." << endl;
        exit(1);
    }
    if (((b * b) - (4 * a * c)) < 0) {
        cerr << "No Solution. "
                "This quadratic equation does not have a root." << endl;
        exit(1);
    }
    cout << "The quadratic equation that "
            "you are trying to solve is:" << endl;
    cout << a << "x^2 + " << b << "x + " << c << endl;
    if (a == 0 && b != 0) {
        x1a = -(c / b);
        cout << "x= " << x1a << endl;
    }
    if (((b * b) - (4 * a * c)) > 0) {
        x2 = (b * b) - (4 * a * c);
        x1a = ((-b + sqrt(x2)) / (2 * a));
        x1b = ((-b - sqrt(x2)) / (2 * a));
        cout << "x= " << x1a << " or x= " << x1b << endl;
    }
    return 0;
}