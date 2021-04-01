#include "MonProjet/MaBibliotheque/MaClasse.h"

MaClasse::MaClasse(const int& monEntier) :
        _monEntier(monEntier)
{

}

const int& MaClasse::getMonEntier() const
{
    return _monEntier;
}

void MaClasse::setMonEntier(const int& monEntier)
{
    _monEntier = monEntier;
}
