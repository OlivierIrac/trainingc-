#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED

#include <iostream>

    class Duree
    {

        private:

        int m_heures;
        int m_minutes;
        int m_secondes;

        public:

        Duree(int heures=0, int minutes=0, int secondes=0);
        std::string affichage();
        int getHeures();
        int getMinutes();
        int getSecondes();
        void operator+= (Duree duree2);

    };


    //Les surcharges d'opérateurs sont hors de la classe
    bool operator==(Duree duree1, Duree duree2);
    Duree operator+(Duree duree1, Duree duree2);
    bool operator<(Duree duree1, Duree duree2);
    std::ostream& operator<< (std::ostream &flux, Duree duree);

    class DureeFonctor{
    public:
    	bool operator() (Duree d1, Duree d2);
    };

#endif // DUREE_H_INCLUDED
