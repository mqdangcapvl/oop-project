#include "Employee.h"

int Employee::employeeCount = 0;

Employee::Employee(int id, string name, string dept) {
    this->id = id;
    this->name = name;
    this->department = dept;

    level = 1;         
    allowance = 100;
}

int Employee::getId() const { return id; }
string Employee::getName() const { return name; }
string Employee::getDepartment() const { return department; }
int Employee::getCount() { return employeeCount; }

void Employee::display() const {
    cout << "ID: " << id
         << " Name: " << name
         << " Dept: " << department
         << " Level: " << level
         << " Allowance: " << allowance
         << " Perf: " << perf.getScore();
}
void Employee::increaseCount() {
    employeeCount++;
}
void Employee::decreaseCount() {
    employeeCount--;
}