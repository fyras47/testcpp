#ifndef AVION_H
#define AVION_H
#include <iostream>
#include <voyageur.h>
#include <voyageur.h>
using namespace std;
#include <vector>

class avion
{
    public:
        avion();
        virtual ~avion();
        avion(int , int );

    protected:

    private:
        int num;
        int nbs;
        vector <voyageur *> vv;
};

#endif // AVION_H
