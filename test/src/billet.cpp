#include "billet.h"

billet::billet()
{
    //ctor
}
billet::billet(int a, float b , int c)
{
    this->numero = a ;
    this->prix = b ;
    this->num_chaise = c ;
}

billet::~billet()
{
    //dtor
}

