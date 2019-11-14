#include "MaClasse.h"
#include "MaSousClasse.h"
#include <iostream>

int main()
{
    std::cout << "Hello world" << std::endl;
    std::cout << MaClasse(1).getMonEntier() << std::endl;
    std::cout << MaSousClasse(2, 3).getMonEntier() << " " << MaSousClasse(2, 3).getMonSousEntier() << std::endl;
    return 0;
}
