#include <iostream>
using namespace std;

class Complex {
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imaginary = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real,
                       imaginary + c.imaginary);
    }

    void show() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    Complex result = c1 + c2;

    cout << "First number = ";
    c1.show();

    cout << "Second number = ";
    c2.show();

    cout << "Result = ";
    result.show();

    return 0;
}