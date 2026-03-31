#include "EmployeeManager.h"

int main() {
    EmployeeManager manager;
    int choice;

    do {
        cout << "\n1. Add Developer\n";
        cout << "2. Add Manager\n";
        cout << "3. Show All\n";
        cout << "4. Search by ID\n";
        cout << "5. Remove by ID\n";
        cout << "6. Total Employees\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            int id, ot;
            string name, dept;
            double base;
            int perf;

            cout << "ID: "; cin >> id;
            cin.ignore();
            cout << "Name: "; getline(cin, name);
            cout << "Dept: "; getline(cin, dept);
            cout << "Base Salary: "; cin >> base;
            cout << "Overtime: "; cin >> ot;

            cout << "Performance score: ";
            cin >> perf;

            Developer d(id, name, dept, base, ot);
            d.setPerformance(perf);
            manager.addDeveloper(d);
        }
        else if (choice == 2) {
            int id;
            string name, dept;
            double base, bonus;
            int perf;

            cout << "ID: "; cin >> id;
            cin.ignore();
            cout << "Name: "; getline(cin, name);
            cout << "Dept: "; getline(cin, dept);
            cout << "Base Salary: "; cin >> base;
            cout << "Bonus: "; cin >> bonus;

            cout << "Performance score: ";
            cin >> perf;

            Manager m(id, name, dept, base, bonus);
            m.setPerformance(perf);
            manager.addManager(m);
        }
        else if (choice == 3) {
            manager.displayAll();
        }
        else if (choice == 4) {
            int id;
            cout << "Enter ID: "; cin >> id;
            manager.searchById(id);
        }
        else if (choice == 5) {
            int id;
            cout << "Enter ID: "; cin >> id;
            manager.removeById(id);
        }
        else if (choice == 6) {
            cout << "Total Employees: " << Employee::getCount() << endl;
        }
        } while (choice != 0);

        return 0;
}