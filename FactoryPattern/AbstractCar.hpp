#ifndef ABSTRAC_CAR_H
#define ABSTRAC_CAR_H

#include <iostream>
#include <string>

class Car {

public :

	virtual std::string getType()const = 0;
	virtual ~Car() = default;

};



#endif