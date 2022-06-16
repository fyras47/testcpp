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
vector<avion>::iterator compagnie::rechercheavion(int num)
{
    for(vector<avion>::iterator it=va.begin(); it<va.end(); it++)
    {
        if((it)->get_num()==num)
        {
            return it ;
        }
    }
    return va.end();

}
bool compagnie::ajouteravion(avion &a)
{

    if ((rechercheavion(a.get_num())!= va.end()))
    {
        return false ;
    }

    va.push_back(a);
    return true ;
}
bool compagnie::affecter_voyageur(int num,voyageur &v)
{
    vector <avion>::iterator it = rechercheavion(num);
    try
    {
        if (it!=va.end())
        {
            if (it->verif())
            {
                if(typeid(v)==(typeid (voyageur)))
                {
                    it->ajouter(v);
                }
            }
            else
            {
                throw "avion plein !";
            }
        }
        else
        {
            throw "avion inexistant !";
        }
    }
    catch(string x)
    {
        cout << x <<endl ;
    }
}
float compagnie::revenue()
{
    float revenu=0;
    for (vector <avion>::iterator it = va.begin();it != va.end();it++)
    {
        for(vector <voyageur *>::iterator itv = it->get_vv().begin(); itv!=it->get_vv().end();itv++)
        {
           if (typeid(itv)==typeid(voyageur))
                revenu+=(*itv)->get_montant();
           //else
          //  voyageur_fidele itv= new voyageur_fidele (static_cast<voyageur_fidele&>);
           // revenu+=(*itv)->get_montant()-((*itv)->get_montant()-(*itv)->get_reduction());
        }
    }
    return revenu;
}
void compagnie::moins_voyager()
{


}
void compagnie::voyageur_fidele(int num)
{
    ofstream f;

    f.open("fidele.txt");
    if(f.is_open())
    {
        float pourcentage = 0 ;
         vector <avion>::iterator it = rechercheavion(num);
        voyageur i;
         for(vector <voyageur *>::iterator itv = it->get_vv().begin(); itv!=it->get_vv().end();itv++)
        {
           // if(typeid(**itv) == typeid(voyageur_fidele))
           // {
                pourcentage ++ ;
            //}
        }
//    f << " le pourcentage est " << pourcentage / itv->get_nbs() *100 << endl;

        f.close();
    }
}




