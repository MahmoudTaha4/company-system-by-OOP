#include <bits/stdc++.h>
#include "Company.h"
#include "Employee.h"
#include "OfficeBoy.h"
using namespace std;

Employee createNewEmployee();
OfficeBoy createNewOfficeBoy();

int main(){
    Employee manager("emad",20,"manager","099","northGiza");

    // company init
    Company doubleTaha("doubleTaha", "giza", 10, manager);



    // employee init
    Employee ahmed("ahmed", 20, "marketing", "011","cairoStreet"),
            mahmoud("mahmoud", 20, "photoGraph", "010","cairoStreet");

    doubleTaha.addNewEmployee(ahmed);
    doubleTaha.addNewEmployee(mahmoud);


    // officeBoy init
    OfficeBoy omar("omar", 17, "006","pyramidsStreet");


    int option;
    while(true){
        cout << "please select option\n";
        cout << "1- print company info\n";
        cout << "2- print all employees info\n";
        cout << "3- add new employee\n";
        cout << "4- get employee info by phone number\n";
        cout << "5- delete employee from company by phone number\n";
        cout << "6- promote employee by phone number\n";
        cout << "7- dePromote employee by phone number\n";
        cout << "8- get number of department\n";
        cout << "9- add new departments\n";
        cout << "10- print manager info\n";
        cout << "11- change manager\n";
        cout << "12- increase salary for employee by phone number\n";
        cout << "13- decrease salary for employee by phone number\n";
        cout << "14- print officeBoy info\n";
        cout << "15- change officeBoy\n";
        cout << "16- exit\n";
        cout << ">> ";
        cin >> option;


        if(option == 1){
            doubleTaha.printCompanyInfo();
        }


        else if (option == 2){
            doubleTaha.printAllEmployeeInfo();
        }


        else if(option == 3){
            Employee newEmployee = createNewEmployee();
            doubleTaha.addNewEmployee(newEmployee);
        }


        else if(option == 4){
            string phone;
            cout << "please enter phone number of the employee : ";
            cin >> phone;
            Employee employee = doubleTaha.getEmployeeByPhoneNumber(phone);
            employee.printEmployeeInfo();
        }


        else if (option == 5){
            string phone;
            cout << "please enter phone number of the employee : ";
            cin >> phone;
            doubleTaha.fireEmployeeByPhoneNumber(phone);
        }


        else if (option == 6) {
            string phone;
            cout << "please enter phone number of the employee : ";
            cin >> phone;
            doubleTaha.promoteEmployeeByPhoneNumber(phone);
        }


        else if (option == 7){
            string phone;
            cout << "please enter phone number of the employee : ";
            cin >> phone;
            doubleTaha.dePromoteEmployeeByPhoneNumber(phone);
        }


        else if (option == 8){
            int numOfDepartments = doubleTaha.getNumOfDepartments();
            cout << "num of departments :" << numOfDepartments << endl << endl;
        }


        else if (option == 9){
            int currNum;
            cout << "please enter num of departments that you want to add :";
            cin >> currNum;
            doubleTaha.addNewDepartment(currNum);
        }

        else if (option == 10){
            doubleTaha.printManagerInfo();
        }

        else if (option == 11){
            Employee newManager = createNewEmployee();
            doubleTaha.changeManager(newManager);
        }

        else if (option == 12){
            int currNum;
            string phone;
            cout << "please enter phone number of the employee : ";
            cin >> phone;
            cout << "please enter the num that you want to add to salary: ";
            cin >> currNum;
            doubleTaha.inCreaseSalaryByPhoneNumber(phone, currNum);
        }

        else if (option == 13){
            int currNum;
            string phone;
            cout << "please enter phone number of the employee : ";
            cin >> phone;
            cout << "please enter the num that you want to add to salary: ";
            cin >> currNum;
            doubleTaha.deCreaseSalaryByPhoneNumber(phone, currNum);
        }

        else if (option == 14){
            omar.printOfficeBoyInfo();
        }

        else if (option == 15){
            OfficeBoy newOfficeBoy = createNewOfficeBoy();
            doubleTaha.changeOfficeBoy(newOfficeBoy);
        }

        else {
            break;
        }
    }
}


Employee createNewEmployee(){
    Employee newEmployee;
    cout << "please enter new employee name's :";
    cin.ignore(1,'\n');
    getline(cin,newEmployee.name);
    cout << "please enter new employee age's :";
    cin >> newEmployee.age;
    cout << "please enter new employee department's :";
    cin >> newEmployee.department;
    cout << "please enter new employee phone number's :";
    cin >> newEmployee.phone;
    cout << "please enter new employee address's :";
    cin >> newEmployee.address;
    cout << endl;
    newEmployee.salary = 3000;
    newEmployee.rank = "bronze";
    return newEmployee;
}

OfficeBoy createNewOfficeBoy(){
    OfficeBoy newOfficeBoy;
    cout << "please enter new officeBoy name's :";
    cin.ignore(1,'\n');
    getline(cin,newOfficeBoy.name);
    cout << "please enter new officeBoy age's :";
    cin >> newOfficeBoy.age;
    newOfficeBoy.department = "officeBoy";
    cout << "please enter new officeBoy phone number's :";
    cin >> newOfficeBoy.phone;
    cout << "please enter new officeBoy address's :";
    cin >> newOfficeBoy.address;
    cout << endl;
    newOfficeBoy.salary = 3000;
    newOfficeBoy.rank = "bronze";
    return newOfficeBoy;
}
