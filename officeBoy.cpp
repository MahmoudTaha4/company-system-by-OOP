
#include "officeBoy.h"

using namespace std;

OfficeBoy::OfficeBoy() {
    salary = 0;
    age = 0;
    rank = "iron";
}

OfficeBoy::OfficeBoy(std::string name, int age, std::string phone,
                    std::string address) {
    this->name = name;
    this->age = age;
    this->phone = phone;
    this->address = address;
    this->salary = 3000;
    this->rank = "iron";
}

void OfficeBoy::printOfficeBoyInfo() {
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
