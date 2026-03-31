#include "EmployeeManager.h"

void EmployeeManager::addDeveloper(Developer d) {
    devList.push_back(d);
}

void EmployeeManager::addManager(Manager m) {
    mgrList.push_back(m);
}

void EmployeeManager::displayAll() {
    cout << "\n--- Developers ---\n";
    for (const auto& d : devList) {
        cout << d << endl;
    }

    cout << "\n--- Managers ---\n";
    for (const auto& m : mgrList) {
        m.display();
    }

    cout << "\nTotal Employees: " << Employee::getCount() << endl;
}

void EmployeeManager::searchById(int id) {
    for (const auto& d : devList) {
        if (d.getId() == id) {
            cout << "Found Developer: ";
            d.display();
            return;
        }
    }

    for (const auto& m : mgrList) {
        if (m.getId() == id) {
            cout << "Found Manager: ";
            m.display();
            return;
        }
    }

    cout << "Employee not found!\n";
}

void EmployeeManager::removeById(int id) {
    for (int i = 0; i < devList.size(); i++) {
        if (devList[i].getId() == id) {
            devList.erase(devList.begin() + i);
            cout << "Developer removed!\n";
            return;
        }
    }
    for (int i = 0; i < mgrList.size(); i++) {
            if (mgrList[i].getId() == id) {
                mgrList.erase(mgrList.begin() + i);
                cout << "Manager removed!\n";
                return;
            }
        }

        cout << "Employee not found!\n";
    }
