/*
 * moto.h
 *
 *  Created on: 31 mai 2017
 *      Author: irac1
 */

#ifndef SRC_VOITURE_H_
#define SRC_VOITURE_H_

#include "vehicule.h"

class Voiture : public Vehicule{
protected:
	std::string type;
public:
	Voiture (std::string marque, std::string modele, double prix,
			std::string couleur, std::string matiere, std::string finition, std::string type);
	std::string description();
};

#endif /* SRC_VOITURE_H_ */
