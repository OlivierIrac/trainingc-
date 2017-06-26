#include "canape.h"
using namespace std;

Canape::Canape (int nbplaces, string motif, string couleur):
		m_nombrePlaces(nbplaces), m_motif(motif), m_couleur(couleur)
{

}

void Canape::descriptionCanape()
{
	if (m_nombrePlaces != 0)
		cout<<"Canapé de "<< m_nombrePlaces << " places, au motif " << m_motif << " et de couleur " << m_couleur << endl;
}

void Canape::changerCouleur(string couleur)
{
	m_couleur=couleur;
}

int Canape::getNbPlaces()
{
	return m_nombrePlaces;
}

