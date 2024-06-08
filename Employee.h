#ifndef COMPANYSYSTEMBYOOP_EMPLOYEE_H
#define COMPANYSYSTEMBYOOP_EMPLOYEE_H

#include <bits/stdc++.h>
using namespace std;

struct Employee {
    string name;
    int salary;
    string department;
    string phone;
    string rank;
    string address;
    int age;

    Employee();
    Employee(string name, int age, string department, string phone,string address);

    void printEmployeeInfo();

};

#endif