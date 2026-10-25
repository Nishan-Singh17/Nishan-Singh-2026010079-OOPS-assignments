#include <iostream>
using namespace std;

class Employee {
private:
    int salary;

public:
    Employee(int s) {
        salary = s;
    }

    friend void compareSalary(Employee e1, Employee e2);
};

void compareSalary(Employee e1, Employee e2) {
    if (e1.salary > e2.salary) {
        cout << "Higher salary = " << e1.salary << endl;
    } else if (e2.salary > e1.salary) {
        cout << "Higher salary = " << e2.salary << endl;
    } else {
        cout << "Both salaries are equal." << endl;
    }
}

int main() {
    Employee e1(40000);
    Employee e2(55000);

    compareSalary(e1, e2);

    return 0;
}