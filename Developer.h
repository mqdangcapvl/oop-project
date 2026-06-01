#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "Employee.h"

class Developer : public Employee {
private:
    double baseSalary;
    int overtimeHours;
public:
    Developer();
    Developer(int id, string name, string dept, double base, int ot);

    double calculateSalary() const override;
    void display() const override;
};

#endif