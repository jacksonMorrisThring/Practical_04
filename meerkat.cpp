using namespace std;
#include <iostream>
#include <string>
#include "meerkat.h"

Meerkat::Meerkat(){
    name = "?";
    age = 0;
}

void Meerkat::setName(std::string name){
    this -> name = name;
}   
std::string Meerkat::getName(){
    return name;
}
void Meerkat::setAge(int age){
    this -> age = age;
}
int Meerkat::getAge(){
    return age;
}   