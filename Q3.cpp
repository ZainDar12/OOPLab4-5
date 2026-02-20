#include <iostream>
using namespace std;

class BankAccount {
public:
    static float interestRate;

    static void changeRate(float r) {
        interestRate = r;
    }

    void showRate() {
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

float BankAccount::interestRate = 4.5;

int main() {
    BankAccount a1, a2, a3;

    BankAccount::changeRate(7.0);

    a1.showRate();
    a2.showRate();
    a3.showRate();
}
