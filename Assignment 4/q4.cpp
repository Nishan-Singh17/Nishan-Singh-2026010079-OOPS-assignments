#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    string model;

public:
    void acceptVehicle() {
        cout << "Enter Brand: ";
        cin >> brand;

        cout << "Enter Model: ";
        cin >> model;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    void acceptCar() {
        acceptVehicle();

        cout << "Enter Number of Doors: ";
        cin >> numberOfDoors;
    }

    void displayCar() {
        displayVehicle();

        cout << "Number of Doors: " << numberOfDoors << endl;
    }
};

class Bike : public Vehicle {
private:
    int engineCapacity;

public:
    void acceptBike() {
        acceptVehicle();

        cout << "Enter Engine Capacity: ";
        cin >> engineCapacity;
    }

    void displayBike() {
        displayVehicle();

        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    Car c;
    Bike b;

    cout << "Enter Car Details:\n";
    c.acceptCar();

    cout << "\nEnter Bike Details:\n";
    b.acceptBike();

    cout << "\nCar Details:\n";
    c.displayCar();

    cout << "\nBike Details:\n";
    b.displayBike();

    return 0;
}