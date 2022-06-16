#ifndef SALLE_H
#define SALLE_H
#include <iostream>

using namespace std;
#include <list>

class salle
{
    public:
        salle();
        virtual ~salle();
        int get_num(){return this -> num_s;};
        int get_cap(){return this -> capacite;};
        int get_size(){return this -> lb.size();};
        bool ajout_billet(int numero);
        float get_revenu();
    protected:

    private:
        int num_s;
        int capacite;
        list<int> lb;
};

#endif // SALLE_H
