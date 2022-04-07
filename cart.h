#ifndef CART_H
#define CART_H

#include "meerkat.h"

#include <string>

class cart {
    public:
    cart();

    //States
	int size;
	int quantity[4];
	meerkat *array;

    bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
    void emptyCart();               // remove all meerkats from the cart
    void printMeerkats();           // print the name, a space, the age, then a new line
};

#endif