#ifndef MEERKAT_H
#define MEERKAT_H

#include <string>

class meerkat {
    public:
    meerkat();

    std::string name;
    int age;

    void setName(std::string meerName);   // change the meerkat's name
    std::string getName();
    void setAge(int meerAge);        // change the meerkat's age
    int getAge();   
};

#endif