#include <iostream>
using namespace std;

class Student {
    float cgpa;

public:
    Student(float a = 0.0) {
        cgpa = a;
    }

    bool operator==(Student s) {
        return cgpa == s.cgpa;
    }

    bool operator>(Student s) {
        return cgpa > s.cgpa;
    }
};

int main() {
    Student s1(8.7);
    Student s2(9.1);

    if (s1 == s2) {
        cout << "Both students have the same CGPA." << endl;
    } else {
        cout << "Both students have different CGPAs." << endl;
    }

    if (s1 > s2) {
        cout << "Student 1 has a higher CGPA." << endl;
    } else if (s2 > s1) {
        cout << "Student 2 has a higher CGPA." << endl;
    } else {
        cout << "Both students have the same CGPA." << endl;
    }

    return 0;
}