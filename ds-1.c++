#include <iostream>
using namespace std;

class candy {
    string name;
    float price;
    float wt;

public:
    candy() {
        name = "";
        price = 0;
        wt = 0;
    }

    candy(string n) {
        name = n;
        price = 0;
        wt = 0;
    }

    candy(string n, float p) {
        name = n;
        price = p;
        wt = 0;
    }

    candy(string n, float p, float w) {
        name = n;
        price = p;
        wt = w;
    }

    candy(const candy &c) {
        name = c.name;
        price = c.price;
        wt = c.wt;
    }

    void applyDiscount() {
        price = price - (price * 0.10);
    }

    void display() {
        cout << "Name   : " << name << endl;
        cout << "Price  : " << price << endl;
        cout << "Weight : " << wt << " g" << endl;
    }
};

int main() {
    string n;
    float p, w;

    candy c1;
    c1.display();

    cout << "\nEnter candy name: ";
    cin >> n;
    candy c2(n);
    c2.display();

    cout << "\nEnter candy name and price: ";
    cin >> n >> p;
    candy c3(n, p);
    c3.display();

    cout << "\nEnter candy name, price and weight: ";
    cin >> n >> p >> w;
    candy c4(n, p, w);
    c4.display();

    c4.applyDiscount();
    cout << "\nAfter 10% discount:\n";
    c4.display();

    return 0;
}