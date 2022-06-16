#ifndef COMPAGNIE_H
#define COMPAGNIE_H
#include <iostream>
#include "voyageur.h"
#include "voyageur_fidele.h"
#include "avion.h"
#include <vector>
using namespace std;

class compagnie
{
    public:
        compagnie();
        virtual ~compagnie();
        compagnie (compagnie &);
        compagnie& operator=(compagnie &c);

    protected:

    private:
        string nom;
        vector <avion> va;
};

#endif // COMPAGNIE_H
