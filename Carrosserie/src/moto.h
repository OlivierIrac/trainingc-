/*
 * moto.h
 *
 *  Created on: 31 mai 2017
 *      Author: irac1
 */

#ifndef SRC_MOTO_H_
#define SRC_MOTO_H_

#include "vehicule.h"

class Moto : public Vehicule{
protected:
	int cylindree;
public:
	Moto (std::string marque, std::string modele, double prix,
			std::string couleur, std::string matiere, std::string finition, int cylindree);
	std::string description();
};

#endif /* SRC_MOTO_H_ */
