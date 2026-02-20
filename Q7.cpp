#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    string accountHolder;
    double balance;

    static string bankName;
    static float interestRate;

    void deposit(double amount) {
        balance += amount;
    }

    void showBalance() const {
        cout << accountHolder << " | Bank: " << bankName
             << " | Balance: " << balance
             << " | Interest: " << interestRate << "%" << endl;
    }
};

string Account::bankName = "National Bank";
float Account::interestRate = 6.5;

int main() {
    Account a1 = {"Ali", 5000};
    Account a2 = {"Sara", 7000};
    Account a3 = {"Ahmed", 9000};

    a1.deposit(1000);
    a2.deposit(500);

    a1.showBalance();
    a2.showBalance();
    a3.showBalance();
}
