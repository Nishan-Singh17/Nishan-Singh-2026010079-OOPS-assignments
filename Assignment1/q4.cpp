#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;

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

    void updateDetails() {
        cout << "Enter new Name: ";
        cin >> name;

        cout << "Enter new Roll No: ";
        cin >> rollNo;

        cout << "Enter new Degree: ";
        cin >> degree;
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
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;
    int choice;

    do {
        cout << "\n\n===== MENU =====\n";
        cout << "1. Add Details\n";
        cout << "2. Update Details\n";
        cout << "3. Update CGPA\n";
        cout << "4. Update Hostel\n";
        cout << "5. Display Details\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s.addDetails();
                break;

            case 2:
                s.updateDetails();
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
