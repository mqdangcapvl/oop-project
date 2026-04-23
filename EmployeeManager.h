#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include "Developer.h"
#include "Manager.h"
#include "intern.h"
#include "tester.h"

class EmployeeManager {
private:
    Employee* empList[200];
    int count;

public:
    EmployeeManager() : count(0) {}
    ~EmployeeManager();
    void addEmployee(Employee* e);

    void displayAll();

    void searchById(int id);
    void removeById(int id);

};

#endif