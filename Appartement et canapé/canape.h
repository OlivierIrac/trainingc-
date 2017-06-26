/*
 * canape.h
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */

#ifndef CANAPE_H_
#define CANAPE_H_

#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

class Canape
{
	int m_nombrePlaces;
	std::string m_motif;
	std::string m_couleur;

public:
	Canape (int nbplaces, std::string motif, std::string couleur);
	void descriptionCanape();
	void changerCouleur(std::string couleur);
	int getNbPlaces();
};


#endif /* CANAPE_H_ */
