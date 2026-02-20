#include <iostream>
using namespace std;

class Car {
private:
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }

    void showSpeed() const {
        cout << "Car Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car c;
    c.setSpeed(120);
    c.showSpeed();
}
