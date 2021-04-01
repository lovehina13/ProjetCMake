#ifndef MONPROJET_MASOUSBIBLIOTHEQUE_MASOUSCLASSE_H
#define MONPROJET_MASOUSBIBLIOTHEQUE_MASOUSCLASSE_H

#include "MonProjet/MaBibliotheque/MaClasse.h"

class MaSousClasse : public MaClasse
{
public:
    MaSousClasse() = default;
    MaSousClasse(const int& monEntier, const int& monSousEntier);

    const int& getMonSousEntier() const;
    void setMonSousEntier(const int& monSousEntier);

private:
    int _monSousEntier{0};
};

#endif /* MONPROJET_MASOUSBIBLIOTHEQUE_MASOUSCLASSE_H */
