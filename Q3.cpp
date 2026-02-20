#include <iostream>
using namespace std;

class SavingsProfile {
private:
    static double annualReturn;

public:
    static void updateReturn(double newValue) {
        annualReturn = newValue;
    }

    void displayReturn() const {
        cout << "Current Annual Return: " << annualReturn << "%" << endl;
    }
};

double SavingsProfile::annualReturn = 3.5;

int main() {

    SavingsProfile customerOne;
    SavingsProfile customerTwo;
    SavingsProfile customerThree;

    SavingsProfile::updateReturn(7.25);

    customerOne.displayReturn();
    customerTwo.displayReturn();
    customerThree.displayReturn();

    return 0;
}
