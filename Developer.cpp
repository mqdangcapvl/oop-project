#include "Developer.h"

Developer::Developer(int id, string name, string dept, double base, int ot)
    : Employee(id, name, dept) {
    baseSalary = base;
    overtimeHours = ot;
}
Developer::Developer() : Employee(0, "", "") {
    baseSalary = 0;
    overtimeHours = 0;
}

double Developer::calculateSalary() const {
    return baseSalary + overtimeHours * 10;
}

ostream& operator<<(ostream& os, const Developer& d) {
    os << "ID = " << d.getId() << " Name : " << d.name << " Salary=" << d.calculateSalary() << " Perf=" << d.getPerformance();
    return os;
}