#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

// Class to represent the ATM account
class ATM_Account {
private:
    double initialBalance = 60000.0;
    double currentBalance = 20000.0;
    const int correctPin = 12345;

public:
    // Constructor
    ATM_Account() {
        // You can use the constructor to initialize member variables if needed
    }

    // Member function to display account details using scope resolution operator
    void showAccountDetails() {
        cout << "\nATM ACCOUNT DEPOSIT SYSTEM" << endl;
        cout << "The Names of the Account Holders are: Rakesh Kharva" << endl;
        cout << "The Account Holders' address is : Mumbai" << endl;
        cout << "The Branch location is: Andheri" << endl;
        cout << "Account number: 5678" << endl;
        cout << "Present available balance: Rs. " << fixed << setprecision(2) << currentBalance << endl;
    }

    // Member function to handle deposit
    void deposit() {
        double depositAmount;
        showAccountDetails();
        cout << "Enter the Amount to be Deposited Rs. ";
        cin >> depositAmount;
        if (depositAmount > 0) {
            currentBalance += depositAmount;
            cout << "Your new available Balanced Amount is Rs. " << fixed << setprecision(2) << currentBalance << endl;
            cout << "Thank You!" << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Member function to handle withdrawal
    void withdraw() {
        double withdrawalAmount;
        cout << "\nATM ACCOUNT WITHDRAWAL" << endl;
        cout << "The Names of the Account Holders are: Rakesh Kharva" << endl;
        cout << "The Account Holders' address is : Mumbai" << endl;
        cout << "The Branch location is : Andheri" << endl;
        cout << "Account number: 5678" << endl;
        cout << "Enter the amount to withdraw Rs. ";
        cin >> withdrawalAmount;

        if (withdrawalAmount > currentBalance) {
            cout << "Insufficient Available Balance in your account." << endl;
            cout << "Sorry !!" << endl;
        } else if (withdrawalAmount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } else {
            currentBalance -= withdrawalAmount;
            cout << "Withdrawal successful. Your new balance is Rs. " << fixed << setprecision(2) << currentBalance << endl;
        }
    }

    // Member function to check balance
    void balanceInquiry() {
        cout << "\nATM ACCOUNT BALANCE" << endl;
        cout << "The Names of the Account Holders are: Rakesh Kharva" << endl;
        cout << "The Account Holders' address is : Mumbai" << endl;
        cout << "The Branch location is : Andheri" << endl;
        cout << "Account number: 5678" << endl;
        cout << "Current available balance: Rs. " << fixed << setprecision(2) << currentBalance << endl;
    }

    // Member function to validate PIN
    bool validatePin(int pin) {
        return pin == correctPin;
    }
};

// Function to display the welcome screen
void displayWelcomeScreen() {
    time_t now = time(0);
    string dt = ctime(&now);
    cout << "\nWELCOME TO ATM" << endl;
    cout << "Current date " << dt;
    cout << "Press 1 and Then Press Enter to Access Your Account Via Pin Number" << endl;
    cout << "or" << endl;
    cout << "Press 2 and press Enter to get Help." << endl;
}

// Function to display the help screen
void displayHelpScreen() {
    cout << "\nATM ACCOUNT STATUS" << endl;
    cout << "You must have the correct pin number to access this acount. See your" << endl;
    cout << "bank representative for assistance during bank opening hours" << endl;
    cout << "Thanks for, your choice today!!" << endl;
}

// Function to display the main menu
void displayMainMenu() {
    cout << "\nATM Main Menu Screen" << endl;
    cout << "Enter [1] To Deposit Cash" << endl;
    cout << "Enter [2] To Withdraw Cash" << endl;
    cout << "Enter [3] To Balance Inquiry" << endl;
    cout << "Enter [0] to Exit ATM" << endl;
    cout << "PLEASE ENTER A SELECTION AND PRESS RETURN KEY: ";
}

int main() {
    ATM_Account account;
    int choice;
    int pin;

    displayWelcomeScreen();
    cout << "PLEASE ENTER A SELECTION AND PRESS RETURN KEY: ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nATM ACCOUNT ACCESS" << endl;
        cout << "Enter Your Acc Pin Access Number! [Only one attempt is allowed]" << endl;
        cin >> pin;
        if (account.validatePin(pin)) {
            do {
                displayMainMenu();
                cin >> choice;
                switch (choice) {
                    case 1:
                        account.deposit();
                        break;
                    case 2:
                        account.withdraw();
                        break;
                    case 3:
                        account.balanceInquiry();
                        break;
                    case 0:
                        cout << "\nThank you for using the ATM." << endl;
                        break;
                    default:
                        cout << "Invalid choice. Please try again." << endl;
                }
                if (choice != 0) {
                    cout << "\nPress any key to Return to the Main Menu" << endl;
                    cin.ignore();
                    cin.get();
                }
            } while (choice != 0);
        } else {
            cout << "\nTHANK YOU" << endl;
            cout << "You had made your attempt which failed!!! No More attempts allowed!! Sorry!!" << endl;
        }
    } else if (choice == 2) {
        displayHelpScreen();
    } else {
        cout << "Invalid choice." << endl;
    }

    cout << "Press any key to continue" << endl;
    cin.ignore();
    cin.get();
    return 0;
}
