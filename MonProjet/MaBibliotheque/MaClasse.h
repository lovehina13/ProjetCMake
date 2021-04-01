#ifndef MONPROJET_MABIBLIOTHEQUE_MACLASSE_H
#define MONPROJET_MABIBLIOTHEQUE_MACLASSE_H

class MaClasse
{
public:
    MaClasse() = default;
    explicit MaClasse(const int& monEntier);

    const int& getMonEntier() const;
    void setMonEntier(const int& monEntier);

private:
    int _monEntier{0};
};

#endif /* MONPROJET_MABIBLIOTHEQUE_MACLASSE_H */
