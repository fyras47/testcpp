#ifndef BILLET_H
#define BILLET_H


class billet
{
    public:
        billet();
        billet(int a, float b , int c);
        virtual ~billet();
        int get_numero(){return this -> numero;};
        float get_prix(){return this -> prix;};
        int get_num_chaise(){return this -> num_chaise;};

    protected:
    int numero ;
    float prix ;
    int num_chaise;

    private:
};

#endif // BILLET_H
