#include "EmployeeManager.h"

void EmployeeManager::addEmployee(Employee* e) {
    empList[count++] = e;
    Employee::increaseCount();
}

void EmployeeManager::displayAll() {
    for (int i = 0; i < count; i++) {
        empList[i]->display(); 
    }
    cout << "\nTotal Employees: " << Employee::getCount() << endl;
}

void EmployeeManager::searchById(int id) {
    for (int i = 0; i < count; i++) {
        if (empList[i]->getId() == id) {
            empList[i]->display();
            return;
        }
    }

    cout << "Employee not found!\n";
}

void EmployeeManager::removeById(int id) {
    int index = -1;

    for (int i = 0; i < count; i++) {
        if (empList[i]->getId() == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Employee not found!\n";
        return;
    }

    delete empList[index];
    Employee::decreaseCount();

    for (int j = index; j < count - 1; j++) {
        empList[j] = empList[j + 1];
    }

    count--;
}

EmployeeManager::~EmployeeManager() {
    for (int i = 0; i < count; i++) {
        delete empList[i];
    }
}