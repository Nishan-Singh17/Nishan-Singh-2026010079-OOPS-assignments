#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;

    void updateDetails() {
        cout << "Enter new Name: ";
        cin >> name;

        cout << "Enter new Roll No: ";
        cin >> rollNo;

        cout << "Enter new Degree: ";
        cin >> degree;
    }

public:
    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
    }

    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }

    void displayDetails() {
        cout << "\nName: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }

    // Public function used to access the private function
    void update() {
        updateDetails();
    }
};

int main() {
    Student s;
    int choice;

    do {
        cout << "\n\n===== MENU =====";
        cout << "\n1. Add Details";
        cout << "\n2. Update Details";
        cout << "\n3. Update CGPA";
        cout << "\n4. Update Hostel";
        cout << "\n5. Display Details";
        cout << "\n6. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s.addDetails();
                break;

            case 2:
                s.update();
                break;

            case 3:
                s.updateCGPA();
                break;

            case 4:
                s.updateHostel();
                break;

            case 5:
                s.displayDetails();
                break;

            case 6:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while (choice != 6);

    return 0;
}