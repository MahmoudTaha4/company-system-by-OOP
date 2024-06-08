

#ifndef COMPANYSYSTEMBYOOP_OFFICEBOY_H
#define COMPANYSYSTEMBYOOP_OFFICEBOY_H

#include <bits\stdc++.h>
using namespace std;

struct OfficeBoy {
    string name;
    int salary;
    string department = "officeBoy";
    string phone;
    string rank;
    string address;
    int age;

    OfficeBoy();
    OfficeBoy(string name, int age, string phone,string address);

    void printOfficeBoyInfo();
};


#endif
