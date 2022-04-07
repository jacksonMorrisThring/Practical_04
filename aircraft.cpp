using namespace std;
#include <iostream>
#include <string>
#include "meerkat.h"
#include "cart.h"

cart::cart(){
    size = 4;
	for (int i = 0; i < size; i++)
	{
		quantity[i] = 0;
	}

	array = new meerkat[4];
}

bool cart::addMeerkat(meerkat cat){
   for (int i = 0; i < size; i++)
	{
		if (quantity[i] == 0)
		{
			array[i] = cat;
			quantity[i] = 1;
			//cout << "Meerkat added to cart in position " <<i<< endl;
			return true;
		}
	}
	//cout << "Cart full, " <<cat.getName() << " will have to walk"<< endl;
	return false;
}
void cart::emptyCart(){
    for (int i = 0; i < size; i++)
	{
		quantity[i]=0;
		array[i].~meerkat();
		//cout << array[i].getName() << " removed from cart" << endl;
		//delete array[i];
	}
	delete[] array;
	//cout <<"Cart emptied!" << endl;
}           
void cart::printMeerkats(){
    for (int i = 0; i < size; i++)
	{
		if (quantity[i]==1)
		{
			cout << array[i].getName() << " " << array[i].getAge() <<endl;
		}
	}
}       

