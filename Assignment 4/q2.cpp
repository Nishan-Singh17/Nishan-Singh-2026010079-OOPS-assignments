#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    void acceptPerson() {
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
    }
};

class Employee : public Person {
protected:
    int employeeID;

public:
    void acceptEmployee() {
        acceptPerson();

        cout << "Enter Employee ID: ";
        cin >> employeeID;
    }

    void displayEmployee() {
        displayPerson();

        cout << "Employee ID: " << employeeID << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void acceptManager() {
        acceptEmployee();

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayManager() {
        displayEmployee();

        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;

    m.acceptManager();

    cout << "\nManager Details:\n";
    m.displayManager();

    return 0;
}