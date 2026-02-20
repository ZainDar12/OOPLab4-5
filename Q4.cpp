#include <iostream>
#include <string>
using namespace std;

class Engine {
public:
    int horsepower;
};

class Car {
public:
    string model;
    Engine engine;
};

int main() {
    Car myCar;
    myCar.model = "Honda Civic";
    myCar.engine.horsepower = 180;

    cout << "Model: " << myCar.model << endl;
    cout << "Horsepower: " << myCar.engine.horsepower << endl;
}
