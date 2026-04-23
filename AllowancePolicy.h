#ifndef ALLOWANCE_POLICY_H
#define ALLOWANCE_POLICY_H

class AllowancePolicy {
protected:
    double extraAllowance; 

public:
    AllowancePolicy();
    virtual ~AllowancePolicy() {}

    virtual double getAllowance() const = 0;
};

#endif