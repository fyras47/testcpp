#include "billet_vip.h"

billet_vip::billet_vip()
{
    //ctor
}

billet_vip::~billet_vip()
{
    //dtor
}
billet_vip::billet_vip(int  a,float  b, int c,int d):billet(a,b,c)
{
    this ->pourcentage_de_red=d ;
}

