#include "MonProjet/MaSousBibliotheque/MaSousClasse.h"

MaSousClasse::MaSousClasse() :
        MaClasse(), monSousEntier(0)
{

}

MaSousClasse::MaSousClasse(const int& monEntier, const int& monSousEntier) :
        MaClasse(monEntier), monSousEntier(monSousEntier)
{

}

MaSousClasse::~MaSousClasse()
{

}

const int& MaSousClasse::getMonSousEntier() const
{
    return this->monSousEntier;
}

void MaSousClasse::setMonSousEntier(const int& monSousEntier)
{
    this->monSousEntier = monSousEntier;
}
