#include "Manager.h"

Manager::Manager(int id, string name, string dept, double base, double b)
    : Employee(id, name, dept) {
    baseSalary = base;
    bonus = b;
}
Manager::Manager() : Employee(0, "", "") {
    baseSalary = 0;
    bonus = 0;
}
double Manager::calculateSalary() const {
    return baseSalary + bonus;
}

void Manager::display() const {
    Employee::display();
    cout << " Salary: " << calculateSalary() << endl;
}
