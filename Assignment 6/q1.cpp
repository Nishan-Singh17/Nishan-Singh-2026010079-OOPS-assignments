#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter(int a = 0) {
        count = a;
    }


    Counter& operator++() {
        count++;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }

    void show() {
        cout << count << endl;
    }
};

int main() {
    Counter c;

    cout << "Initial value: ";
    c.show();

    ++c;
    cout << "After prefix ++: ";
    c.show();

    c++;
    cout << "After postfix ++: ";
    c.show();

    return 0;
}