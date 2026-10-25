#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int a = 0) {
        value = a;
    }

    void operator--() {
        value--;
    }

    void show() {
        cout << value << endl;
    }
};

int main() {
    Number n(10);

    cout << "Pre decrement: ";
    n.show();

    --n;

    cout << "Post decrement: ";
    n.show();

    return 0;
}