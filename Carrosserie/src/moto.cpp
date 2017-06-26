
/*
 * moto.cpp
 *
 *  Created on: 31 mai 2017
 *      Author: irac1
 */
#include "moto.h"

Moto::Moto (std::string marque, std::string modele, double prix, std::string couleur, std::string matiere, std::string finition, int cyl):
	Vehicule(marque, modele, prix, couleur, matiere, finition), cylindree(cyl){
}


std::string Moto::description() {
	return "Moto " + Vehicule::description()+ "Cylindree"+std::to_string(cylindree)+"cm3\n";
}



