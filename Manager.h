#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
private:
    double baseSalary;
    double bonus;

public:
    Manager(int id, string name, string dept, double base, double bonus);

    double calculateSalary() const;
    void display() const;
};

#endif
