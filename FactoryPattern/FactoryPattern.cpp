
#include <iostream>
#include "ConcreateFactoryRenault.hpp"
#include "ConcreateRenault.hpp"
#include "Client.hpp"

int main()
{
    
    Client c = Client();

    c.useProduct("rn");
    c.useProduct("bm");
    c.useProduct("p");

    return 0;
}