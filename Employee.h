#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee {
protected:
    int id;
    string name;
    string department;

    class Performance {
    private:
        int score;
    public:
        Performance(): score(0) {}
        void setScore(int s){ score = s; }
        int getScore() const { return score; }
    } perf;

    static int employeeCount;

public:
    Employee(int id, string name, string dept);
    ~Employee() {}

    int getId() const;
    string getName() const;
    string getDepartment() const;

    void setPerformance(int s) { perf.setScore(s); }
    int getPerformance() const { return perf.getScore(); }

    static int getCount();
    static void increaseCount();
    static void decreaseCount();
    void display() const;
};

#endif