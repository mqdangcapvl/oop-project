#include "Developer.h"

Developer::Developer(int id, string name, string dept, double base, int ot)
    : Employee(id, name, dept) {
    baseSalary = base;
    overtimeHours = ot;
}

Developer::Developer() : Employee(0, "", "") {
    baseSalary = 0;
    overtimeHours = 0;
}

double Developer::calculateSalary() const {
    return baseSalary + overtimeHours * 10;
}

void Developer::display() const {
    Employee::display();
    cout << " [Developer] Salary: " << calculateSalary() << endl;
}