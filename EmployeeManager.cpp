#include "EmployeeManager.h"

void EmployeeManager::addDeveloper(Developer d) {
    devList[devCount++] = d;
    Employee::increaseCount();
}
void EmployeeManager::addManager(Manager m) {
    mgrList[mgrCount++] = m;
    Employee::increaseCount();
}
void EmployeeManager::displayAll() {
    cout << "\n--- Developers ---\n";
    for (int i = 0; i < devCount; i++) {
        cout << devList[i] << endl;
    }

    cout << "\n--- Managers ---\n";
    for (int i = 0; i < mgrCount; i++) {
        mgrList[i].display();
    }

    cout << "\nTotal Employees: " << Employee::getCount() << endl;
}

void EmployeeManager::searchById(int id) {
    for (int i = 0; i < devCount; i++) {
        if (devList[i].getId() == id) {
            cout << "Found Developer: ";
            devList[i].display();
            return;
        }
    }

    for (int i = 0; i < mgrCount; i++) {
        if (mgrList[i].getId() == id) {
            cout << "Found Manager: ";
            mgrList[i].display();
            return;
        }
    }

    cout << "Employee not found!\n";
}

void EmployeeManager::removeById(int id) {
    // remove Developer
    for (int i = 0; i < devCount; i++) {
        if (devList[i].getId() == id) {
            for (int j = i; j < devCount - 1; j++) {
                devList[j] = devList[j + 1];
            }
            devCount--;
            Employee::decreaseCount();
            cout << "Developer removed!\n";
            return;
        }
    }

    // remove Manager
    for (int i = 0; i < mgrCount; i++) {
        if (mgrList[i].getId() == id) {
            for (int j = i; j < mgrCount - 1; j++) {
                mgrList[j] = mgrList[j + 1];
            }
            mgrCount--;
            Employee::decreaseCount();
            cout << "Manager removed!\n";
            return;
        }
    }

    cout << "Employee not found!\n";
}