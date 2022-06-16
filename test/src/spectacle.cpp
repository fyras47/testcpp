#include "spectacle.h"

spectacle::spectacle()
{
    //ctor
}

spectacle::~spectacle()
{
    for (vector<billet*>:: iterator it=vb.begin(); it !=vb.end(); it++)
        delete (*it);
}
spectacle::spectacle (spectacle &s)
{
    billet* b ;

    this->vs=s.vs;

    for (vector<billet*>:: iterator it=s.vb.begin(); it !=s.vb.end(); it++)
    {
        if(typeid(**it)==(typeid (billet)))
        {
            b=new billet((**it));
        }
        else if(typeid(**it)==(typeid (billet_vip)))
            b=new billet_vip(static_cast<billet_vip&>(**it));


        vb.push_back(b);
    }
}
spectacle& spectacle::operator=(spectacle &s)
{
    if (&s!=this)
    {
        for (vector<billet*> ::iterator it=vb.begin(); it !=vb.end(); it++)
            delete (*it);
    }
    vb.clear();

    this->vs=s.vs;

    billet* b ;


    for (vector<billet*> ::iterator it=s.vb.begin(); it !=s.vb.end(); it++)
    {
        if(typeid(**it)==(typeid (billet)))
        {
            b=new billet((**it));
        }
        else if(typeid(**it)==(typeid (billet_vip)))
            b=new billet_vip(static_cast<billet_vip&>(**it));


        vb.push_back(b);
    }
    return * this ;
}

vector<salle>::iterator spectacle::recherchesalle(int numero)
{
    for(vector<salle>::iterator it=vs.begin(); it<vs.end(); it++)
    {
        if((it)->get_num()==numero)
        {
            return it ;
        }
    }
    return vs.end();

}
bool spectacle::ajoutersalle(salle &s)
{

    if ((recherchesalle(s.get_num())!= vs.end()))
    {
        return false ;
    }

    vs.push_back(s);
    return true ;
}
void spectacle::affecter_billet(int num_s,int numero)
{
    vector<salle>::iterator it ;

    it = recherchesalle(num_s);
    try
    {
        if (it!= vs.end())
        {


            if(it->get_cap()>it->get_size())
            {
                it -> ajout_billet(numero);
            }

        }
        else
        {
            throw("salle pleine ou salle n'existe pas ! ");
        }
    }

    catch(string x)
    {
        cout << x <<endl ;

    }
}
float spectacle::revenu_spec()
{
    float revenu = 0;
    for(vector<salle>::iterator it=vs.begin(); it<vs.end(); it++)
    {
        billet_vip i;
        for(vector<billet*>::iterator it1=vb.begin(); it1<vb.end(); it1++)
        {
            if(typeid(**it1)==(typeid (billet)))
            {
                revenu += (*it1)->get_prix();
            }
            else if(typeid(**it1)==(typeid (billet_vip)))
            {
                i = static_cast <const billet_vip&>(**it1);
                revenu += (*it1)->get_prix()-((*it1)->get_prix()*((i).get_reduc()/100)) ;
            }

        }
    }

}
void spectacle::salle_plus_remplie()
{

}
void spectacle::enregistrer_vip(int num_s)
{

    ofstream f;
    f.open("billetvip.txt");
    if(f.is_open()){
        billet_vip i;
        for(vector <billet*> :: iterator it = vb.begin(); it != vb.end(); ++it){
            if(typeid(**it) == typeid(billet_vip)){
                i = static_cast <const billet_vip &> (**it);
                f << (*it)->get_numero() << " " << (*it)->get_prix() << " "  << endl;
            }
        }
        f.close();
    }

}

