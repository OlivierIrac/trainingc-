/*
 * carrosserie.cpp
 *
 *  Created on: 30 mai 2017
 *      Author: irac1
 */

#include "carrosserie.h"
using namespace std;

Carrosserie::Carrosserie (string couleur, string matiere, string finition):
		m_couleur(couleur), m_matiere(matiere), m_finition(finition) {
}

string Carrosserie::description() {
	return m_couleur + " " + m_matiere + " " + m_finition + ". ";
}


void Carrosserie::setMatiere (std::string matiere){
	m_matiere=matiere;
}
std::string Carrosserie::getMatiere(){
	return m_matiere;
}
void Carrosserie::setFinition (std::string finition){
	m_finition=finition;
}

std::string Carrosserie::getFinition(){
	return m_finition;
}

bool operator== (Carrosserie c1, Carrosserie c2){
	if (c1.getCouleur()==c2.getCouleur() && c1.getFinition()==c2.getFinition() && c1.getMatiere()==c2.getMatiere() )
		return true;
	else
		return false;
}

bool operator!= (Carrosserie c1, Carrosserie c2){
	if (c1.getCouleur()!=c2.getCouleur() || c1.getFinition()!=c2.getFinition() || c1.getMatiere()!=c2.getMatiere() )
		return true;
	else
		return false;
}
