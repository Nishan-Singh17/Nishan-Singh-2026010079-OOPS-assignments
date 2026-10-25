#include <iostream>
#include <string>
using namespace std;

class College {
protected:
    string collegeName;

public:
    College(string c) : collegeName(c) {
        cout << "College Constructor Executed" << endl;
    }
};

class Department : public College {
private:
    string departmentName;

public:
    Department(string c, string d)
        : College(c), departmentName(d) {
        cout << "Department Constructor Executed" << endl;
    }

    void display() {
        cout << "\nCollege Name: " << collegeName << endl;
        cout << "Department Name: " << departmentName << endl;
    }
};

int main() {
    Department d("Thapar Institute of Engineering and Technology",
                 "Computer Applications");

    d.display();

    return 0;
}