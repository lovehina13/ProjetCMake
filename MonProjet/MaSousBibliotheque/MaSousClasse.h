#ifndef MONPROJET_MASOUSBIBLIOTHEQUE_MASOUSCLASSE_H
#define MONPROJET_MASOUSBIBLIOTHEQUE_MASOUSCLASSE_H

#include "MonProjet/MaBibliotheque/MaClasse.h"

class MaSousClasse : public MaClasse
{
public:
    MaSousClasse();
    MaSousClasse(const int& monEntier, const int& monSousEntier);
    virtual ~MaSousClasse();

    const int& getMonSousEntier() const;
    void setMonSousEntier(const int& monSousEntier);

private:
    int monSousEntier;
};

#endif /* MONPROJET_MASOUSBIBLIOTHEQUE_MASOUSCLASSE_H */
