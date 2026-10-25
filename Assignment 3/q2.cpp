#include <iostream>
using namespace std;

class Number {
private:
    int a, b;

public:
    Number(int x, int y) {
        a = x;
        b = y;
    }

    friend void calculateSum(Number n);
};

void calculateSum(Number n) {
    int sum = n.a + n.b;

    cout << "A = " << n.a << endl;
    cout << "B = " << n.b << endl;
    cout << "Sum = " << sum << endl;
}

int main() {
    Number n1(10, 20);

    calculateSum(n1);

    return 0;
}