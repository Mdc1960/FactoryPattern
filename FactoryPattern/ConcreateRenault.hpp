#ifndef CONCREAT_RENAULT_H
#define CONCREAT_RENAULT_H

#include "AbstractCar.hpp"


class Renault : public Car {

public:

	std::string getType()const override;


};


#endif