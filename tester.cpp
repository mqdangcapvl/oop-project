#include "Tester.h"

Tester::Tester() : Employee(0, "", "") {
    baseSalary = 0;
    bugsFound = 0;
}

Tester::Tester(int id, string name, string dept, double base, int bugs)
    : Employee(id, name, dept) {
    baseSalary = base;
    bugsFound = bugs;
}

double Tester::calculateSalary() const {
    return baseSalary + bugsFound * 5 + getAllowance();
}
double Tester::getAllowance() const {
    return extraAllowance;
}
void Tester::display() const {
    Employee::display();
    cout << " [Tester] Salary: " << calculateSalary() << endl;
}