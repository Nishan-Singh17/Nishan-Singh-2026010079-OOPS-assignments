#include <iostream>
using namespace std;

class Academic {
protected:
    int marks;

public:
    void acceptAcademic() {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayAcademic() {
        cout << "Marks: " << marks << endl;
    }
};

class Sports {
protected:
    int sportsScore;

public:
    void acceptSports() {
        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }

    void displaySports() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class Result : public Academic, public Sports {
private:
    int total;

public:
    void calculateTotal() {
        total = marks + sportsScore;
    }

    void displayResult() {
        displayAcademic();
        displaySports();

        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result r;

    r.acceptAcademic();
    r.acceptSports();

    r.calculateTotal();

    cout << "\nResult:\n";
    r.displayResult();

    return 0;
}