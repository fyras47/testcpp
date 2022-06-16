#ifndef COMPAGNIE_H
#define COMPAGNIE_H
#include <iostream>
#include "voyageur.h"
#include "voyageur_fidele.h"
#include "avion.h"
#include <vector>
#include <fstream>
using namespace std;

class compagnie
{
    public:
        compagnie();
        virtual ~compagnie();
        compagnie (compagnie &);
        compagnie& operator=(compagnie &c);
        vector<avion>::iterator rechercheavion(int num);
        bool ajouteravion(avion &a);
        bool affecter_voyageur(int num,voyageur &v);
        float revenue();
        void moins_voyager();
        void voyageur_fidele(int num);


    protected:

    private:
        string nom;
        vector <avion> va;
};

#endif // COMPAGNIE_H
