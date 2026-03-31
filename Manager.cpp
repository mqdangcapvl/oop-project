#include "Manager.h"

Manager::Manager(int id, string name, string dept, double base, double bonus)
    : Employee(id, name, dept) {
    baseSalary = base;
    this->bonus = bonus;
}

double Manager::calculateSalary() const {
    return baseSalary + bonus;
}

void Manager::display() const {
    Employee::display();
    cout << " Role: Manager"
         << " Salary: " << calculateSalary() << endl;
}
