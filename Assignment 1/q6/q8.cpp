#include <iostream>
using namespace std;

namespace First {
    int x = 10;

    void display() {
        cout << "First namespace" << endl;
    }
}

namespace Second {
    int x = 20;

    void display() {
        cout << "Second namespace" << endl;
    }
}

int main() {
    cout << First::x << endl;
    First::display();

    cout << Second::x << endl;
    Second::display();

    return 0;
}