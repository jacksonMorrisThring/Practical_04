using namespace std;
#include <iostream>
#include <string>
#include "meerkat.h"

meerkat::meerkat(){
    name = "?";
    age = 0;
}

void meerkat::setName(std::string name){
    this -> name = name;
}   
std::string meerkat::getName(){
    return name;
}
void meerkat::setAge(int age){
    this -> age = age;
}
int meerkat::getAge(){
    return age;
}   

meerkat::~meerkat(){
    
}