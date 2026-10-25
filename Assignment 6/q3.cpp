#include <iostream>
using namespace std;

class Number {
    int n;

public:
    Number(int a = 0) {
        n = a;
    }

    Number operator+(Number c) {
        return Number(n + c.n);
    }

    void show() {
        cout << n << endl;
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    Number result = n1 + n2;

    cout << "Sum: ";
    result.show();

    return 0;
}