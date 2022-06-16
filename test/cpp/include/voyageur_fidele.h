#ifndef VOYAGEUR_FIDELE_H
#define VOYAGEUR_FIDELE_H

#include <voyageur.h>


class voyageur_fidele : public voyageur
{
    public:
        voyageur_fidele();
        virtual ~voyageur_fidele();
        voyageur_fidele(int ,int ,int , float);

    protected:

    private:
        float reduction;
};

#endif // VOYAGEUR_FIDELE_H
