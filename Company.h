#ifndef COMPANYSYSTEMBYOOP_COMPANY_H
#define COMPANYSYSTEMBYOOP_COMPANY_H

#include <bits\stdc++.h>
#include "Employee.h"
#include "OfficeBoy.h"
using namespace std;

struct Company {
    string name;
    string government;
    int numOfDepartments;
    Employee manager;
    vector<Employee> employees;
    OfficeBoy officeBoy;

    Company();

    Company(string name, string government, int numOfDepartments, Employee manager);

    void addNewEmployee(Employee newEmployee);
    void printCompanyInfo();
    void printAllEmployeeInfo();
    void promoteEmployeeByPhoneNumber(string phone);
    void dePromoteEmployeeByPhoneNumber(string phone);
    Employee  getEmployeeByPhoneNumber(string phone);
    int getEmployeeIndexByPhoneNumber(string phone);
    void fireEmployeeByPhoneNumber(string phone);
    int getNumOfDepartments();
    void addNewDepartment(int currNum);
    void printManagerInfo();
    void changeManager(Employee newManager);
    void inCreaseSalaryByPhoneNumber(string phone,int currNum);
    void deCreaseSalaryByPhoneNumber(string phone,int currNum);
    void changeOfficeBoy(OfficeBoy newOfficeBoy);
    void printOfficeBoyInfo();
};

#endif