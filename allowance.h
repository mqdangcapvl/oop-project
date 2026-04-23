#ifndef ALLOWANCE_H
#define ALLOWANCE_H

class AllowancePolicy {
protected:
    double extraAllowance; 

public:
    AllowancePolicy();
    virtual ~AllowancePolicy() {}

    virtual double getAllowance() const = 0;
};

#endif