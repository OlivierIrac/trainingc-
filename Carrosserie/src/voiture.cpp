
/*
 * voiture.cpp
 *
 *  Created on: 31 mai 2017
 *      Author: irac1
 */
#include "voiture.h"

Voiture::Voiture (std::string marque, std::string modele, double prix, std::string couleur, std::string matiere, std::string finition,
		std::string typ):
	Vehicule(marque, modele, prix, couleur, matiere, finition), type(typ){
}


std::string Voiture::description() {
	return "Voiture " + Vehicule::description()+ "Type:"+type+"\n";
}



