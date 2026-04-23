#ifndef TESTER_H
#define TESTER_H

#include "Employee.h"
#include "allowance.h"

class Tester : public Employee, public AllowancePolicy {
private:
    double baseSalary;
    int bugsFound;

public:
    Tester();
    Tester(int id, string name, string dept, double base, int bugs);

    double calculateSalary() const override;
    void display() const override;
    double getAllowance() const override;
};

#endif