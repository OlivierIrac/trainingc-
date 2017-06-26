/*
 * carrosserie.h
 *
 *  Created on: 30 mai 2017
 *      Author: irac1
 */

#ifndef CARROSSERIE_H_
#define CARROSSERIE_H_

#include <iostream>

class Carrosserie {
protected:
	std::string m_couleur;
	std::string m_matiere;
	std::string m_finition;
public:
	Carrosserie (std::string couleur, std::string matiere, std::string finition);
	void setMatiere (std::string matiere);
	std::string getMatiere();
	void setFinition (std::string finition);
	std::string getFinition();
	std::string description ();

	const std::string& getCouleur() const {
		return m_couleur;
	}

	void setCouleur(const std::string& couleur) {
		m_couleur = couleur;
	}
};

bool operator== (Carrosserie c1, Carrosserie c2);
bool operator!= (Carrosserie c1, Carrosserie c2);

#endif /* CARROSSERIE_H_ */
