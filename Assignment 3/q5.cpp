#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNo;
    float balance;
    static int totalAccounts;

public:
    BankAccount(int acc, float bal) {
        accountNo = acc;
        balance = bal;
        totalAccounts++;
    }

    friend void displayAccount(BankAccount b);

    static void displayTotalAccounts() {
        cout << "Total accounts created = " << totalAccounts << endl;
    }
};

int BankAccount::totalAccounts = 0;

void displayAccount(BankAccount b) {
    cout << "Account Number: " << b.accountNo << endl;
    cout << "Balance: " << b.balance << endl;
}

int main() {
    BankAccount b1(101, 5000);
    BankAccount b2(102, 7500);
    BankAccount b3(103, 10000);

    cout << "Account 1:" << endl;
    displayAccount(b1);
    cout << endl;

    cout << "Account 2:" << endl;
    displayAccount(b2);
    cout << endl;

    cout << "Account 3:" << endl;
    displayAccount(b3);
    cout << endl;

    BankAccount::displayTotalAccounts();

    return 0;
}