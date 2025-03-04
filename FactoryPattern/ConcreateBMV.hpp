#ifndef CONCREATE_BMV_H
#define CONCREATE_BMV_H


#include "AbstractCar.hpp"

class BMV : public Car {

public : 

	std::string getType()const override;

};



#endif