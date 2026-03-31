#include "Employee.h"

int Employee::employeeCount = 0;

Employee::Employee(int id, string name, string dept) {
    this->id = id;
    this->name = name;
    this->department = dept;
    employeeCount++;
}

int Employee::getId() const { return id; }
string Employee::getName() const { return name; }
string Employee::getDepartment() const { return department; }
int Employee::getCount() { return employeeCount; }

void Employee::display() const {
    cout << "ID: " << id
         << " Name: " << name
         << " Dept: " << department
         << " Perf: " << perf.getScore();
}
