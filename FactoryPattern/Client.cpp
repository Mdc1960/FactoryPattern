#include "Client.hpp"

#include <ostream>

void Client::useProduct(std::string type)
{

	if (type == "rn") {
		factory = new FactoryRenault();

		factory->showInformation();
	}else if (type == "bm") {
		factory = new FactoryBMV();

		factory->showInformation();
	}
	else {
		std::cout << "Unknown car !!! " << std::endl;
	}

}
