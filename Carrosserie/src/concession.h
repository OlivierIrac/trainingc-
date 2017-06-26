/*
 * concession.h
 *
 *  Created on: 31 mai 2017
 *      Author: irac1
 */

#ifndef SRC_CONCESSION_H_
#define SRC_CONCESSION_H_
#include <iostream>
#include <vector>
#include <memory>
#include "vehicule.h"

class Concession {
protected:
	std::string m_nom;
	std::vector<std::shared_ptr<Vehicule>> stockVehicules;
	double tresorerie;
public:
	Concession(std::string m_nom);
	void ajouterVehicule(std::shared_ptr<Vehicule> nouveauVehicule);
	std::string inventaire();
	int calculerValeurStock();
	void vendre(int i);
	void acheter (std::shared_ptr<Vehicule> v);
	void changerPrix(double pourcentage);
	void liquidationMarque (std:: string marque);
	int nbDifferentVehicules();
	void trierVehicules();
	const std::string& getNom() const {
		return m_nom;
	}

	double getTresorerie() const {
		return tresorerie;
	}
};



#endif /* SRC_CONCESSION_H_ */
