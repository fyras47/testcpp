#include "avion.h"

avion::avion()
{
    //ctor
}

avion::~avion()
{
    //dtor
}
avion::avion(int a, int b,vector <voyageur * > vv)
{
    this ->num = a ;
    this ->nbs = b ;
    this ->vv = vv;
}
bool avion::verif()
{
    return this->nbs > this->vv.size();
}
bool avion::ajouter (voyageur &v)
{
    //vv.push_back(**v);
}

