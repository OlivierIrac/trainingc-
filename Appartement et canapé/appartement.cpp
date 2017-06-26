/*
 * appartement.cpp
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */

#include "Appartement.h"
using namespace std;

// J'ajoute un commentaire pour voir

Appartement::Appartement (int pieces, int sup, string couleur, string sol, array<unique_ptr<Canape>,5> canapes):
m_nombrePieces(pieces), m_superficie(sup), m_couleurMur(couleur), m_typeSol(sol), m_canapes(move(canapes))
{

}

Appartement::Appartement (Appartement const& appartToCopy) {
	m_nombrePieces = appartToCopy.m_nombrePieces;
	m_superficie = appartToCopy.m_superficie;
	m_couleurMur = appartToCopy.m_couleurMur;
	m_typeSol = appartToCopy.m_typeSol;
	for (int i=0; i<5; i++)
		m_canapes[i] = make_unique<Canape>(*appartToCopy.m_canapes[i]);
}


void Appartement::description()
{
	cout<< "Cet appartement comprend " << m_nombrePieces << " pièces pour " << m_superficie << " m2." << endl;
	cout<< "Il a des murs "<<m_couleurMur<< " et des sols en "<<m_typeSol<< "." << endl;
	//m_canapeSalon->descriptionCanape();
	for (auto const& canape : m_canapes)
		canape->descriptionCanape();
//	for (unsigned int i=0;i<m_canapes.size();i++){
//		m_canapes[i]->descriptionCanape();
//	}
}


void Appartement::setNombrePieces(int nombrePieces) {
	if (nombrePieces>0)
		m_nombrePieces = nombrePieces;
	else
		throw AppartementException(1, "Invalid nombresPieces", "Fatal");
}

void Appartement::repeindre(string nouvelleCouleur)
{
	m_couleurMur=nouvelleCouleur;
}

 int Appartement::getNombreCanapes()
{
	int i=0;
	for (auto const& canape : m_canapes)
	{
		if(canape->getNbPlaces() != 0)
			i++;
	}
	return i;
//	int nbCanapesNonVides;
//	for (unsigned int i=0; i<m_canapes.size();i++)
//		if (m_canapes[i]->getNbPlaces()!=0)
//			nbCanapesNonVides++;
//	return nbCanapesNonVides;
}

