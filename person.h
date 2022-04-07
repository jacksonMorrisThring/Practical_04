#ifndef PERSON_H
#define PERSON_H

#include <string>

class person {
    public:
    person();

    std::string name;
    int salary;

    void setName(std::string name);  
    std::string getName();
    void setSalary(int salary);    
    int getSalary();   
};

#endif