/*
 * vehicule.cpp
 *
 *  Created on: 30 mai 2017
 *      Author: irac1
 */

#include "vehicule.h"
using namespace std;

Vehicule::Vehicule (string marque, string modele, double prix, string couleur, string matiere, string finition ):
	m_marque(marque), m_modele(modele), m_prix(prix)  {
	m_carrosserie=make_shared<Carrosserie> (couleur, matiere, finition);
}

string Vehicule::description() {
	return m_marque + " " + m_modele + ". " + to_string(m_prix) + "€. " + m_carrosserie->description() + "\n";
}

void Vehicule::changerPrix(double nouveauPrix) {
	m_prix=nouveauPrix;
}

double Vehicule::getPrix() const {
	return m_prix;
}

void Vehicule::ameliorerCarrosserie () {
	int surcout=0;
	if (m_carrosserie->getFinition() != "Perlee")
		surcout++;
	if (m_carrosserie->getMatiere() != "Fibre Carbone")
		surcout++;

	switch (surcout) {
		case 1:
			m_prix *= 1.5;
			break;
		case 2:
			m_prix = m_prix*2;
			break;
		default:
			break;
	}

	m_carrosserie->setFinition("Perlee");
	m_carrosserie->setMatiere("Fibre Carbone");

}

bool operator==(Vehicule v1, Vehicule v2){
	if ( (v1.getMarque()==v2.getMarque())
		 && (v1.getModele()==v2.getModele())
		 && (v1.getPrix()==v2.getPrix())
		 && (*(v1.getCarrosserie())==*(v2.getCarrosserie()))
		)
		return true;
	else
		return false;
}

bool operator!=(Vehicule v1, Vehicule v2){
	if ( (v1.getMarque()!=v2.getMarque())
		 || (v1.getModele()!=v2.getModele())
		 || (v1.getPrix()!=v2.getPrix())
		 || (*(v1.getCarrosserie())!=*(v2.getCarrosserie()))
		)
		return true;
	else
		return false;
}

bool operator<(Vehicule v1, Vehicule v2){
	if (v1.getPrix()<v2.getPrix())
		return true;
	else
		return false;
}

std::ostream& operator<< (std::ostream &flux, Vehicule v){
	flux << v.description();
	return flux;
}


