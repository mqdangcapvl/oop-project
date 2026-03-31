#include "Developer.h"

Developer::Developer(int id, string name, string dept, double base, int ot)
    : Employee(id, name, dept) {
    baseSalary = base;
    overtimeHours = ot;
}

double Developer::calculateSalary() const {
    return baseSalary + overtimeHours * 10;
}

void Developer::display() const {
    Employee::display();
    cout << " Role: Developer"
         << " Salary: " << calculateSalary() << endl;
}

ostream& operator<<(ostream& os, const Developer& d) {
    os << "[Dev] ID = " << d.getId() << " Name : " << d.name << " Salary=" << d.calculateSalary() << " Perf=" << d.getPerformance();
    return os;
}