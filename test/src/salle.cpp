#include "salle.h"

salle::salle()
{
    //ctor
}

salle::~salle()
{
    //dtor
}
bool salle::ajout_billet(int numero)
{
    lb.push_back(numero);
}
