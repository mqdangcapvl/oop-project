#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include "Developer.h"
#include "Manager.h"
#include "intern.h"
#include "tester.h"

class EmployeeManager {
private:
    struct Node {
        Employee* data;
        Node* next;

        Node(Employee* employee) {
            data = employee;
            next = nullptr;
        }
    };

    Node* head;
    int count;

public:
    EmployeeManager();
    ~EmployeeManager();

    void addEmployee(Employee* e);     
    void displayAll();                 
    void searchById(int id);           
    void removeById(int id);           

    bool isEmpty() const;
    int getTotal() const;
};

#endif