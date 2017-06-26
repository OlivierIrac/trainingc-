
    #include "Duree.h"
    #include <iostream>

    using namespace std;

    Duree::Duree(int heures, int minutes, int secondes)
    : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
    {
    }

    string Duree::affichage()
    {
        return to_string(m_heures) + "h" + to_string(m_minutes) + "m" + to_string(m_secondes) + "s";
    }

    int Duree::getHeures()
    {
    	return m_heures;
    }

    int Duree::getMinutes()
    {
    	return m_minutes;
    }

    int Duree::getSecondes()
    {
    	return m_secondes;
    }

    //On surcharge l'opérateur
    //Hors de la classe
    bool operator==(Duree duree1, Duree duree2)
    {
    	 if(duree1.getHeures() == duree2.getHeures() &&
    		duree1.getMinutes() == duree2.getMinutes() &&
			duree1.getSecondes() == duree2.getSecondes())
            return true;
        else
            return false;
    }

    //Surcharge de l'operateur hors de la classe
    Duree operator+ (Duree duree1, Duree duree2)
    {
        int heures = duree1.getHeures()+duree2.getHeures();
        int minutes = duree1.getMinutes()+duree2.getMinutes();
        int secondes = duree1.getSecondes()+duree2.getSecondes();

        //On gère le cas où les minutes
        //ou les secondes depasseraient 60
        if(secondes >= 60)
        {
            secondes -= 60;
            minutes++;
        }

        if(minutes >= 60)
        {
            minutes -= 60;
            heures++;
        }

        return Duree(heures,minutes,secondes);
    }

    std::ostream& operator<< (std::ostream &flux, Duree duree)
    {
    	flux << duree.getHeures() << "h" << duree.getMinutes() << "m" << duree.getSecondes() << "s";
    	return flux;
}

bool operator<(Duree duree1, Duree duree2) {
	if(duree1.getHeures() < duree2.getHeures())
		return true;
	else if ((duree1.getHeures() == duree2.getHeures()) && (duree1.getMinutes() < duree2.getMinutes()))
		return true;
	else if ((duree1.getHeures() == duree2.getHeures()) && (duree1.getMinutes() == duree2.getMinutes()) && (duree1.getSecondes() < duree2.getSecondes()))
       return true;
   else
       return false;
}

void Duree::operator+=(Duree duree2) {
	this->m_heures+=duree2.getHeures();
	this->m_minutes+=duree2.getMinutes();
	this->m_secondes+=duree2.getSecondes();

	if(this->m_secondes >= 60){
		this->m_secondes -= 60;
	    this->m_minutes++;
	}

	if(this->m_minutes >= 60) {
		this->m_minutes -= 60;
		this->m_heures++;
	}
}

bool DureeFonctor::operator() (Duree d1, Duree d2){
	if (d1.getMinutes()<d2.getMinutes())
		return true;
	else
		return false;
}
