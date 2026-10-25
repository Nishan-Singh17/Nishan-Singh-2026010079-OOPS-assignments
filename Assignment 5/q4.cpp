#include <iostream>
using namespace std;

class Grade {
public:
    void result(int marks) {
        cout << "Marks in one subject: " << marks << endl;
    }

    double result(int a, int b) {
        return (a + b) / 2.0;
    }

    double result(int a, int b, int c) {
        return (a + b + c) / 3.0;
    }
};

int main() {
    Grade g;

    g.result(85);

    cout << "Average of two subjects: "
         << g.result(80, 90) << endl;

    cout << "Average of three subjects: "
         << g.result(80, 90, 85) << endl;

    return 0;
}