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

    protected:

    private:
        int num_s;
        int capacite;
        list<int> lb;
};

#endif // SALLE_H
