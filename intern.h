#ifndef INTERN_H
#define INTERN_H

#include "Employee.h"
#include "allowance.h"

class Intern : public Employee, public AllowancePolicy {
private:
    double stipend;

public:
    Intern();
    Intern(int id, string name, string dept, double stipend);

    double calculateSalary() const override;
    void display() const override;
    
    double getAllowance() const override;
};

#endif