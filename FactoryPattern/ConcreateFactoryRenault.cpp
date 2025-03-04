#include "ConcreateFactoryRenault.hpp"

Car* FactoryRenault::createCar()const
{
	return new Renault();
}

