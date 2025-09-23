#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   // private data member

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }

    // Function to check balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000);   // initial balance = 1000

    cout << "Initial Balance: " << account.getBalance() << endl;

    account.deposit(500);
    cout << "Balance after deposit: " << account.getBalance() << endl;

    account.withdraw(300);
    cout << "Balance after withdrawal: " << account.getBalance() << endl;

    account.withdraw(1500); // should show error
    cout << "Final Balance: " << account.getBalance() << endl;

    return 0;
}

