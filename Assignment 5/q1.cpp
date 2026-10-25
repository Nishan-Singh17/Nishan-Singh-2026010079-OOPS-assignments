#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void display(int a) {
        cout << "Integer: " << a << endl;
    }

    void display(double a) {
        cout << "Double: " << a << endl;
    }

    void display(string a) {
        cout << "String: " << a << endl;
    }
};

int main() {
    Print p;

    p.display(79);
    p.display(17.5);
    p.display("Nishan Sigh");

    return 0;
}