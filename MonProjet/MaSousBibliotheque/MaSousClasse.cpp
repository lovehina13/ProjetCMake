#include "MonProjet/MaSousBibliotheque/MaSousClasse.h"

MaSousClasse::MaSousClasse(const int& monEntier, const int& monSousEntier) :
        MaClasse(monEntier), _monSousEntier(monSousEntier)
{

}

const int& MaSousClasse::getMonSousEntier() const
{
    return _monSousEntier;
}

void MaSousClasse::setMonSousEntier(const int& monSousEntier)
{
    _monSousEntier = monSousEntier;
}
