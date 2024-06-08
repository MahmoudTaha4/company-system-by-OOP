#include "Employee.h"
using namespace std;

Employee::Employee () {
    salary = 0;
    age = 0;
    rank = "iron";
}

Employee::Employee(std::string name, int age, std::string department, std::string phone,
                   std::string address) {
    this->name = name;
    this->age = age;
    this->department = department;
    this->phone = phone;
    this->address = address;
    this->salary = 3000;
    this->rank = "iron";
}

void Employee::printEmployeeInfo() {
    if (age != 0){
        cout << "name: " << this->name << '\n';
        cout << "department : " << this->department << '\n';
        cout << "age: " << this->age << '\n';
        cout << "phone number: " << this->phone << '\n';
        cout << "salary: " << this->salary << '\n';
        cout << "rank: " << this->rank << '\n';
    }
    else {
        cout << "Not found" << endl;
    }
}