#include "compagnie.h"

compagnie::compagnie()
{
    //ctor
}

compagnie::~compagnie()
{
    //dtor
}
compagnie::compagnie (compagnie &c)
 {
     this->nom = c.nom;
     this->va=c.va;
 }
 compagnie& compagnie::operator=(compagnie &c)
 {
     if (&c!=this)
     {
         this -> nom = c.nom;
         this->va=c.va;
     }
 }





