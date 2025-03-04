#ifndef CONCREATE_FACTORY_BMV_H
#define CONCREATE_FACTORY_BMV_H

#include "AbstractFactoryCar.hpp"


class FactoryBMV : public FactoryCar {

public :

	Car* createCar()const override;

};



#endif