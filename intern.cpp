#include "Intern.h"

Intern::Intern() : Employee(0, "", "") {
    stipend = 0;
}

Intern::Intern(int id, string name, string dept, double stipend)
    : Employee(id, name, dept) {
    this->stipend = stipend;
}
double Intern::getAllowance() const {
    return extraAllowance;
}
double Intern::calculateSalary() const {
    return stipend + getAllowance();
}
void Intern::display() const {
    Employee::display();
    cout << " [Intern] Salary: " << calculateSalary() << endl;
}