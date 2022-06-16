#include "voyageur_fidele.h"

voyageur_fidele::voyageur_fidele()
{
    //ctor
}

voyageur_fidele::~voyageur_fidele()
{
    //dtor
}
voyageur_fidele::voyageur_fidele(int a,int b,int c, float d):voyageur(a,b,c)
{
    this->reduction = d ;
}
