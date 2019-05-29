#ifndef MACLASSE_H
#define MACLASSE_H

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

#endif /* MACLASSE_H */
