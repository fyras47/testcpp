#ifndef VOYAGEUR_H
#define VOYAGEUR_H
#include <iostream>
using namespace std;

class voyageur
{
    public:
        voyageur();
        voyageur(int , int ,int);
        virtual ~voyageur();
        int get_num_passport(){return this->num_passport;};

    protected:
        int num_passport;
        int num_siege;
        int montant;

    private:
};

#endif // VOYAGEUR_H
