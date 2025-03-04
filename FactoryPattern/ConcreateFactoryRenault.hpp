#ifndef CONCREATE_FACTORy_RENAULT_H
#define CONCREATE_FACTORy_RENAULT_H

#include "AbstractFactoryCar.hpp"


class FactoryRenault : public FactoryCar {

public :


	Car* createCar()const override;


};



#endif