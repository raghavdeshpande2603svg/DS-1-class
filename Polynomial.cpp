#include <iostream>
using namespace std;

class Polynomial {
    int coeff[100];
    int maxDegree;

public:
    Polynomial() {
        maxDegree = 0;
        for (int i = 0; i < 100; i++)
            coeff[i] = 0;
    }

    void input() {
        cout << "Enter degree: ";
        cin >> maxDegree;

        cout << "Enter coefficients from x^0 to x^"
             << maxDegree << ":\n";

        for (int i = 0; i <= maxDegree; i++)
            cin >> coeff[i];
    }

    void display() const {
        bool first = true;

        for (int i = maxDegree; i >= 0; i--) {
            if (coeff[i] == 0)
                continue;

            if (!first && coeff[i] > 0)
                cout << " + ";

            if (i == 0)
                cout << coeff[i];
            else if (i == 1)
                cout << coeff[i] << "x";
            else
                cout << coeff[i] << "x^" << i;

            first = false;
        }

        if (first)
            cout << "0";

        cout << endl;
    }

    double evaluate(double x) const {
        double result = 0;
        double power = 1;

        for (int i = 0; i <= maxDegree; i++) {
            result += coeff[i] * power;
            power *= x;
        }

        return result;
    }

    int degree() const {
        for (int i = maxDegree; i >= 0; i--) {
            if (coeff[i] != 0)
                return i;
        }

        return 0;
    }

    Polynomial add(const Polynomial& p) const {
        Polynomial result;

        result.maxDegree = max(maxDegree, p.maxDegree);

        for (int i = 0; i <= result.maxDegree; i++)
            result.coeff[i] = coeff[i] + p.coeff[i];

        return result;
    }

    Polynomial subtract(const Polynomial& p) const {
        Polynomial result;

        result.maxDegree = max(maxDegree, p.maxDegree);

        for (int i = 0; i <= result.maxDegree; i++)
            result.coeff[i] = coeff[i] - p.coeff[i];

        return result;
    }

    Polynomial multiply(const Polynomial& p) const {
        Polynomial result;

        result.maxDegree = maxDegree + p.maxDegree;

        for (int i = 0; i <= maxDegree; i++) {
            for (int j = 0; j <= p.maxDegree; j++) {
                result.coeff[i + j] += coeff[i] * p.coeff[j];
            }
        }

        return result;
    }
};

int main() {
    Polynomial p, q;
    Polynomial sum, difference, product;
    double x;

    cout << "POLYNOMIAL USING 1D ARRAY\n\n";

    cout << "Enter Polynomial P:\n";
    p.input();

    cout << "\nEnter Polynomial Q:\n";
    q.input();

    cout << "\nP(x) = ";
    p.display();

    cout << "Q(x) = ";
    q.display();

    cout << "\nEnter value of x: ";
    cin >> x;

    cout << "P(" << x << ") = " << p.evaluate(x) << endl;

    cout << "Degree of P = " << p.degree() << endl;

    sum = p.add(q);
    difference = p.subtract(q);
    product = p.multiply(q);

    cout << "\nP + Q = ";
    sum.display();

    cout << "P - Q = ";
    difference.display();

    cout << "P * Q = ";
    product.display();

    return 0;
}
