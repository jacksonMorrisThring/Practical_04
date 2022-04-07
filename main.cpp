#include "meerkat.h"
#include <string>
#include <iostream>
using namespace std;

int main(){

    Meerkat John;
    Meerkat Marty;
    Meerkat Peter;
    Meerkat Sophie;
    


    John.setName("John");
    Marty.setName("Marty");
    Peter.setName("Peter");
    Sophie.setName("Sophie");

    John.setAge(2);
    Marty.setAge(4);
    Peter.setAge(1);
    Sophie.setAge(3);

    cout << "Meerkat name is " << John.getName() <<" and is " << John.getAge() << " years old" <<endl;
    cout << "Meerkat name is " << Marty.getName() <<" and is " << Marty.getAge() << " years old" <<endl;
    cout << "Meerkat name is " << Peter.getName() <<" and is " << Peter.getAge() << " years old" <<endl;
    cout << "Meerkat name is " << Sophie.getName() <<" and is " << Sophie.getAge() << " years old" <<endl;





    return 0;
}