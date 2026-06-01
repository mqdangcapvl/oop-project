#include "EmployeeManager.h"

EmployeeManager::EmployeeManager() {
    head = nullptr;
    count = 0;
}

EmployeeManager::~EmployeeManager() {
    Node* current = head;

    while (current != nullptr) {
        Node* temp = current;
        current = current->next;

        delete temp->data;
        delete temp;

        Employee::decreaseCount();
    }

    head = nullptr;
    count = 0;
}

bool EmployeeManager::isEmpty() const {
    return head == nullptr;
}

int EmployeeManager::getTotal() const {
    return count;
}

void EmployeeManager::addEmployee(Employee* e) {
    Node* newNode = new Node(e);

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;

        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    count++;
    Employee::increaseCount();

    cout << "Employee inserted into linked list successfully.\n";
}

void EmployeeManager::displayAll() {
    if (isEmpty()) {
        cout << "Linked list is empty!\n";
        return;
    }

    Node* current = head;

    cout << "\n--- Traverse Employee Linked List ---\n";

    while (current != nullptr) {
        current->data->display();
        cout << endl;

        current = current->next;
    }

    cout << "Total Employees: " << count << endl;
}

void EmployeeManager::searchById(int id) {
    Node* current = head;

    while (current != nullptr) {
        if (current->data->getId() == id) {
            cout << "Employee found:\n";
            current->data->display();
            cout << endl;
            return;
        }

        current = current->next;
    }

    cout << "Employee not found!\n";
}

void EmployeeManager::removeById(int id) {
    if (head == nullptr) {
        cout << "Linked list is empty!\n";
        return;
    }

    if (head->data->getId() == id) {
        Node* temp = head;
        head = head->next;

        delete temp->data;
        delete temp;

        count--;
        Employee::decreaseCount();

        cout << "Employee deleted from linked list successfully.\n";
        return;
    }

    Node* previous = head;
    Node* current = head->next;

    while (current != nullptr) {
        if (current->data->getId() == id) {
            previous->next = current->next;

            delete current->data;
            delete current;

            count--;
            Employee::decreaseCount();

            cout << "Employee deleted from linked list successfully.\n";
            return;
        }

        previous = current;
        current = current->next;
    }

    cout << "Employee not found!\n";
}