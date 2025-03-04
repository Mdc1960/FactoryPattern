#ifndef ABSTRACT_FACTORY_CAR_H
#define ABSTRACT_FACTORY_CAR_H


#include "ConcreateRenault.hpp"
#include "ConcreateBMV.hpp"

class FactoryCar {


public :

	virtual Car* createCar()const = 0;

	void showInformation() {
		std::cout << "Car type : " << createCar()->getType() << std::endl;
	}

	virtual ~FactoryCar() = default;

};


#endif