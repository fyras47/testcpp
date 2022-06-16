#ifndef SPECTACLE_H
#define SPECTACLE_H


class spectacle
{
    public:
        spectacle();
        virtual ~spectacle();

    protected:

    private:
        string nom;
         vector<salle> vs;
            vector<billet*> vb ;
};

#endif // SPECTACLE_H
