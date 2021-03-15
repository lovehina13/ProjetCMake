#include "MonProjet/MaBibliotheque/MaClasse.h"

MaClasse::MaClasse() :
        monEntier(0)
{

}

MaClasse::MaClasse(const int& monEntier) :
        monEntier(monEntier)
{

}

MaClasse::~MaClasse()
{

}

const int& MaClasse::getMonEntier() const
{
    return this->monEntier;
}

void MaClasse::setMonEntier(const int& monEntier)
{
    this->monEntier = monEntier;
}
