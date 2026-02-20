#include <iostream>
#include <string>

using namespace std;

class Publication {
public:
    string bookName;
    double cost;

    Publication() {}
    Publication(string n, double c) {
        bookName = n;
        cost = c;
    }
};

int main() {

    Publication libraryCollection[5] = {
        Publication("C++ Basics", 29.99),
        Publication("Data Structures", 39.99),
        Publication("OOP Concepts", 34.99),
        Publication("Algorithms", 44.99),
        Publication("Design Patterns", 49.99)
    };

    int index = 0;
    while (index < 5) {
        cout << "Book Name: " << libraryCollection[index].bookName
             << " | Cost: " << libraryCollection[index].cost << endl;
        index++;
    }

    return 0;
}
