#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void acceptPerson() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
    string course;

public:
    void acceptStudent() {
        acceptPerson();

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Course: ";
        cin >> course;
    }

    void displayStudent() {
        displayPerson();

        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s;

    s.acceptStudent();

    cout << "\nStudent Details:\n";
    s.displayStudent();

    return 0;
}