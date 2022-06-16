#ifndef BILLET_VIP_H
#define BILLET_VIP_H

#include <billet.h>


class billet_vip : public billet
{
    public:
        billet_vip();
        virtual ~billet_vip();
        billet_vip(int  ,float  , int ,int );
        int get_reduc(){return this->pourcentage_de_red;};

    protected:

    private:
        int pourcentage_de_red;
};

#endif // BILLET_VIP_H
