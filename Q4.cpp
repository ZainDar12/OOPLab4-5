#include <iostream>
#include <string>

using namespace std;

class Processor {
private:
    int coreCount;

public:
    Processor(int cores) {
        coreCount = cores;
    }

    int getCores() const {
        return coreCount;
    }
};

class Laptop {
private:
    string brandName;
    Processor cpu;

public:
    Laptop(string brand, int cores)
        : brandName(brand), cpu(cores) {}

    void displaySpecs() const {
        cout << "Brand: " << brandName << endl;
        cout << "CPU Cores: " << cpu.getCores() << endl;
    }
};

int main() {

    Laptop myDevice("Dell XPS", 8);
    myDevice.displaySpecs();

    return 0;
}
