#include "ConcreateFactoryBMV.hpp"

Car* FactoryBMV::createCar() const
{
	return new BMV();
}
