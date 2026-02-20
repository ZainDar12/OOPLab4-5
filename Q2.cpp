#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    double price;
};

int main() {
    Book library[5] = {
        {"Physics", 500},
        {"Chemistry", 450},
        {"Mathematics", 600},
        {"Biology", 400},
        {"Computer Science", 750}
    };

    for (int i = 0; i < 5; i++) {
        cout << library[i].title << " - Rs." << library[i].price << endl;
    }
}
