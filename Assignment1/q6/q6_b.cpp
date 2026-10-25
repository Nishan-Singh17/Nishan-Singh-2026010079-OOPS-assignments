#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    void displayMarks() {
        cout << "Marks = " << marks;
    }
};

int main() {
    Student s;

    s.setMarks(90);
    s.displayMarks();

    return 0;
}