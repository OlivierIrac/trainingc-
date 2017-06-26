/*
 * vehicule.h
 *
 *  Created on: 30 mai 2017
 *      Author: irac1
 */

#ifndef VEHICULE_H_
#define VEHICULE_H_

#include <iostream>
#include <memory>
#include "carrosserie.h"

class Vehicule {
protected:
	std::string m_marque;
	std::string m_modele;
	double m_prix;
	std::shared_ptr<Carrosserie> m_carrosserie;
public:
	Vehicule (std::string marque="", std::string modele="", double prix=0, std::string couleur="", std::string matiere="", std::string finition="");
	std::string description();
	void changerPrix(double nouveauPrix);
	void ameliorerCarrosserie();
	double getPrix() const;

	void setPrix(double prix) {
		m_prix = prix;
	}

	const std::string& getMarque() const {
		return m_marque;
	}

	const std::shared_ptr<Carrosserie>& getCarrosserie() const {
		return m_carrosserie;
	}

	void setCarrosserie(const std::shared_ptr<Carrosserie>& carrosserie) {
		m_carrosserie = carrosserie;
	}

	void setMarque(const std::string& marque) {
		m_marque = marque;
	}

	const std::string& getModele() const {
		return m_modele;
	}

	void setModele(const std::string& modele) {
		m_modele = modele;
	}
};

bool operator==(Vehicule v1, Vehicule v2);
bool operator!=(Vehicule v1, Vehicule v2);
bool operator<(Vehicule v1, Vehicule v2);
std::ostream& operator<< (std::ostream &flux, Vehicule v);

class VehiculeSortFunctor{
public:
	bool operator() (const std::shared_ptr<Vehicule>& v1, const std::shared_ptr<Vehicule>& v2){
		return *v1<*v2;
	}
};

#endif /* VEHICULE_H_ */
