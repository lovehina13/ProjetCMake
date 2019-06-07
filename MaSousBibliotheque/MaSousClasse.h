#ifndef MASOUSCLASSE_H
#define MASOUSCLASSE_H

#include "MaClasse.h"

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

#endif /* MASOUSCLASSE_H */
