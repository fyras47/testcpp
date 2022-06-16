#ifndef AVION_H
#define AVION_H
#include <iostream>
#include <voyageur.h>
#include "voyageur_fidele.h"
using namespace std;
#include <vector>

class avion
{
public:
    avion();
    virtual ~avion();
    avion(int, int , vector<voyageur *> );
    int get_num()
    {
        return this->num;
    };
    bool verif();
    bool ajouter (voyageur &v);
    vector <voyageur *> get_vv(){return this ->vv;};
    int get_nbs(){return this->nbs;};

protected:

private:
    int num;
    int nbs;
    vector <voyageur *> vv;
};

#endif // AVION_H
