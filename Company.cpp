#include "Company.h"
#include <bits\stdc++.h>
using namespace std;
Company::Company() {
    numOfDepartments = 0;
}

Company::Company(string name, string government, int numOfDepartment, Employee manager) {
    this->name = name;
    this->government = government;
    this->numOfDepartments = numOfDepartment;
    this->manager = manager;
}

void Company::addNewEmployee(Employee newEmployee){
    this->employees.push_back(newEmployee);
}

void Company::printCompanyInfo(){
    cout << "company's name :" << this->name << endl;
    cout << "government of company :" << this->government << endl;
    cout << "num of departments in school's :" << this->numOfDepartments << endl;
    cout << "name of company manager's :" << this->manager.name << endl;
    cout << "num of company employees :" << this->employees.size() << endl << endl;
}

void Company::printAllEmployeeInfo(){
    for(int i = 0; i < this->employees.size(); i++){
        this->employees[i].printEmployeeInfo();
        cout << "================================\n";
    }
}

void Company::promoteEmployeeByPhoneNumber(string phone) {
    int employeeIndex = this->getEmployeeIndexByPhoneNumber(phone);
    if (employeeIndex == -1){
        cout << "Not Found" << endl;
        return;
    }
    if (employees[employeeIndex].rank == "iron"){
        this->employees[employeeIndex].rank = "bronze";
        return;
    }
    else if (employees[employeeIndex].rank == "bronze"){
        employees[employeeIndex].rank = "silver";
        return;
    }
    else if (employees[employeeIndex].rank == "silver"){
        employees[employeeIndex].rank = "gold";
        return;
    }
    else if (employees[employeeIndex].rank == "gold"){
        employees[employeeIndex].rank = "plat";
        return;
    }
}

void Company::dePromoteEmployeeByPhoneNumber(string phone) {
    int employeeIndex = this->getEmployeeIndexByPhoneNumber(phone);
    if (employeeIndex == -1){
        cout << "Not Found" << endl;
        return;
    }
    if (employees[employeeIndex].rank == "iron"){
        this->employees.erase(this->employees.begin() + employeeIndex);
        cout << employees[employeeIndex].name << " is fired" << endl;
        return;
    }
    else if (employees[employeeIndex].rank == "bronze"){
        employees[employeeIndex].rank = "iron";
        return;
    }
    else if (employees[employeeIndex].rank == "silver"){
        employees[employeeIndex].rank = "bronze";
        return;
    }
    else if (employees[employeeIndex].rank == "gold"){
        employees[employeeIndex].rank = "silver";
        return;
    }
    else if (employees[employeeIndex].rank == "plat"){
        employees[employeeIndex].rank = "gold";
        return;
    }
}

int Company::getEmployeeIndexByPhoneNumber(string phone){
    for (int i = 0; i < this->employees.size(); i++){
        if (this->employees[i].phone == phone){
            return i;
        }
    }
    return -1;
}

Employee Company::getEmployeeByPhoneNumber(std::string phone) {
    for(int i = 0; i < this->employees.size(); i++){
        if(this->employees[i].phone == phone){
            return this->employees[i];
        }
    }
    return {};
}

void Company::fireEmployeeByPhoneNumber(std::string phone){
    for (int i = 0; i < this->employees.size(); i++){
        if (phone == this->employees[i].phone){
            this->employees.erase(this->employees.begin() + i);
            cout << employees[i].name << " is fired" << endl << endl;
            return;
        }
    }
    cout << name << " Not Found" << endl;
}

int Company::getNumOfDepartments(){
    return this->getNumOfDepartments();
}

void Company::addNewDepartment(int currNum){
    this->numOfDepartments += currNum;
    cout << "new Departments added" << endl;
}

void Company::printManagerInfo(){
    cout << "manager name: " << this ->manager.name << endl;
    cout << "manager age: " << this ->manager.age << endl;
    cout << "manager phone number: " << this ->manager.phone << endl;
    cout << "manager salary: " << this ->manager.salary << endl;
    cout << "manager address: " << this ->manager.address << endl;
    cout << "manager rank: plat" << endl;
}
void Company::changeManager(Employee newManager){
    this->manager = newManager;
}

void Company::inCreaseSalaryByPhoneNumber(string phone,int currNum){
    int employeeIndex = this->getEmployeeIndexByPhoneNumber(phone);
    this->employees[employeeIndex].salary += currNum;
}

void Company::deCreaseSalaryByPhoneNumber(string phone,int currNum){
    int employeeIndex = this->getEmployeeIndexByPhoneNumber(phone);
    cout << "please enter the num that you want to minus from salary: ";
    cin >> currNum;
    this->employees[employeeIndex].salary -= currNum;
}

void Company::changeOfficeBoy(OfficeBoy newOfficeBoy){
    this->officeBoy = newOfficeBoy;
}

void Company::printOfficeBoyInfo() {
    this->officeBoy.printOfficeBoyInfo();
}