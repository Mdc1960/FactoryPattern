#ifndef CLIENT_FACTORY_PRODUCT_H
#define CLIENT_FACTORY_PRODUCT_H

#include "ConcreateFactoryRenault.hpp"
#include "ConcreateFactoryBMV.hpp"

class Client {

private :

	FactoryCar* factory;

public :

	void useProduct(std::string type);

};


#endif