#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

void test() {
    cout << "Inside test function" << endl;

    Demo d3;
    Demo d4;

    cout << "Leaving test function" << endl;
}

int main() {
    cout << "Inside main" << endl;

    Demo d1;
    Demo d2;

    cout << "Calling test function" << endl;

    test();

    cout << "Back inside main" << endl;

    return 0;
}