#include <iostream>
using namespace std;

class Term {
public:
    int coefficient;
};

class Polynomial {
public:
    Term t[10];
    int exponent[100];
};

int main() {

    Polynomial p;
    int i, n;

    cout << "Enter the degree: ";
    cin >> n;

    for (i = 0; i <= n; i++) {

        p.exponent[i] = i;

        cout << "Enter coefficient of x^" << p.exponent[i] << ": ";
        cin >> p.t[i].coefficient;
    }

    cout << "Polynomial: ";

    for (i = n; i >= 0; i--) {

        cout << p.t[i].coefficient
             << "x^" << p.exponent[i];

        if (i != 0)
            cout << " + ";
    }

    return 0;
}