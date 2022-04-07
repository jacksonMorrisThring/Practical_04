using namespace std;
#include <iostream>
#include <string>
#include "person.h"

person::person(string name,int salary){
   name = this -> name;
   salary = this -> salary;
}

void person::setName(std::string name){
    this -> name = name;
}   
std::string person::getName(){
    return name;
}
void person::setSalary(int salary){
    this -> salary = salary;
}
int person::getSalary(){
    return salary;
}   