#include <iostream>
#include <string>
using namespace std;

class Department {
public:
    string name;
    string code;
};

class Student {
public:
    string name;
    int age;
    Department dept;
};

int main() {
    Student students[3] = {
        {"Ali", 20, {"Computer Science", "CS101"}},
        {"Sara", 21, {"Business", "BBA202"}},
        {"Ahmed", 19, {"Engineering", "ENG303"}}
    };

    for (int i = 0; i < 3; i++) {
        cout << students[i].name << ", Age: " << students[i].age
             << ", Dept: " << students[i].dept.name
             << " (" << students[i].dept.code << ")" << endl;
    }
}
