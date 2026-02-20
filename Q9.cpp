#include <iostream>
#include <string>
using namespace std;

class Project {
public:
    string projectTitle;
    int duration; // in months

    Project(string title, int d) {
        projectTitle = title;
        duration = d;
    }
};

class Employee {
private:
    string empName;
    double salary;
    Project* assignedProject;   

public:
    static float taxRate;

    Employee(string name, double sal, Project* p) {
        empName = name;
        salary = sal;
        assignedProject = p;
    }

    static void changeTaxRate(float newRate) {
        taxRate = newRate;
    }

    double calculateNetSalary() const {
        return salary - (salary * taxRate / 100);
    }

    void showDetails() const {
        cout << "Employee: " << empName
             << " | Gross Salary: " << salary
             << " | Net Salary: " << calculateNetSalary()
             << " | Project: " << assignedProject->projectTitle
             << " (" << assignedProject->duration << " months)"
             << endl;
    }
};

float Employee::taxRate = 10.0;

int main() {

    Project p1("AI System", 12);
    Project p2("Mobile App", 6);

    Employee staff[2] = {
        Employee("Ali", 80000, &p1),
        Employee("Sara", 70000, &p2)
    };

    Employee::changeTaxRate(15.0);

    for (int i = 0; i < 2; i++) {
        staff[i].showDetails();
    }
}
