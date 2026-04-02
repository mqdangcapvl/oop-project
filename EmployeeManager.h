#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include "Developer.h"
#include "Manager.h"

class EmployeeManager {
private:
    Developer devList[100];
    Manager mgrList[100];
    int devCount = 0;
    int mgrCount = 0;

public:
    void addDeveloper(Developer d);
    void addManager(Manager m);

    void displayAll();

    void searchById(int id);
    void removeById(int id);
};

#endif