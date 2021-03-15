#ifndef MONPROJET_MABIBLIOTHEQUE_MACLASSE_H
#define MONPROJET_MABIBLIOTHEQUE_MACLASSE_H

class MaClasse
{
public:
    MaClasse();
    MaClasse(const int& monEntier);
    virtual ~MaClasse();

    const int& getMonEntier() const;
    void setMonEntier(const int& monEntier);

private:
    int monEntier;
};

#endif /* MONPROJET_MABIBLIOTHEQUE_MACLASSE_H */
