#include <iostream>
using namespace std;

class Bill {
public:
    double calculateBill(int quantity, double price) {
        return quantity * price;
    }

    double calculateBill(int q1, double p1, int q2, double p2) {
        return (q1 * p1) + (q2 * p2);
    }

    double calculateBill(double amount, double discount) {
        return amount - (amount * discount / 100);
    }
};

int main() {
    Bill b;

    cout << "Bill for one item: Rs. "
         << b.calculateBill(3, 100.0) << endl;

    cout << "Bill for two items: Rs. "
         << b.calculateBill(5, 900.0, 3, 50.0) << endl;

    cout << "Bill after discount: Rs. "
         << b.calculateBill(700.0, 17.0) << endl;

    return 0;
}