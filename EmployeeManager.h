#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include "Developer.h"
#include "Manager.h"
#include <vector>

class EmployeeManager {
private:
    vector<Developer> devList;
    vector<Manager> mgrList;

public:
    void addDeveloper(Developer d);
    void addManager(Manager m);

    void displayAll();

    // 🔥 NEW: search & remove
    void searchById(int id);
    void removeById(int id);
};

#endif