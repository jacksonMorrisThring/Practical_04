#include "person.h"
#include <string>
#include <iostream>
using namespace std;

int main(){

    person John("Pee", 50000);
    person Marty("Pee", 50000);
    person Peter("Pee", 50000);
    person Sophie("Pee", 50000);
    


    John.setName("John");
    Marty.setName("Marty");
    Peter.setName("Peter");
    Sophie.setName("Sophie");

    John.setSalary(50000);
    Marty.setSalary(40000);
    Peter.setSalary(100000);
    Sophie.setSalary(30000);

    cout << "Persons name is " << John.getName() <<" and is payed " << John.getSalary() <<endl;
    cout << "Persons name is " << Marty.getName() <<" and is payed " << Marty.getSalary() <<endl;
    cout << "Persons name is " << Peter.getName() <<" and is payed " << Peter.getSalary() <<endl;
    cout << "Persons name is " << Sophie.getName() <<" and is payed " << Sophie.getSalary() <<endl;

    return 0;
}