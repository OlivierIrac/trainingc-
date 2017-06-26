
/*
 * concession.cpp
 *
 *  Created on: 31 mai 2017
 *      Author: irac1
 */

#include <algorithm>
#include <unordered_set>
#include "concession.h"
using namespace std;

Concession::Concession(string nom):
	m_nom(nom){
	tresorerie=100000;
}

void Concession::ajouterVehicule(shared_ptr<Vehicule> nouveauVehicule){
	stockVehicules.push_back(nouveauVehicule);
}

string Concession::inventaire(){
	string inventaire="";
	for (shared_ptr<Vehicule> vehicule : stockVehicules)
		inventaire+=vehicule->description();
	return inventaire;
}

int Concession::calculerValeurStock(){
	int valeur=0;
	for (shared_ptr<Vehicule> vehicule : stockVehicules)
		valeur+=vehicule->getPrix();
	return valeur;
}

void Concession::vendre(int i){
	tresorerie += stockVehicules[i]->getPrix();
	if (stockVehicules.begin()+i<stockVehicules.end())
		stockVehicules.erase(stockVehicules.begin()+i);
}

void Concession::acheter (shared_ptr<Vehicule> v) {
	tresorerie -= (v->getPrix())*0.8;
	stockVehicules.push_back(v);
}

void Concession::changerPrix(double pourcentage) {
	for (auto &vehicule : stockVehicules)
		vehicule->setPrix(vehicule->getPrix()*(1+pourcentage));
}

void Concession::liquidationMarque (string marque){
	for (unsigned int i=0; i<stockVehicules.size(); i++){
		if (stockVehicules[i]->getMarque()==marque){
			tresorerie += stockVehicules[i]->getPrix();
			stockVehicules.erase(stockVehicules.begin()+i);
		}
	}

}

int Concession::nbDifferentVehicules() {
	vector<std::shared_ptr<Vehicule>> tmp;
	bool found=false;
	for (auto v1 : stockVehicules){
		found = false;
		for (auto v2 : tmp)
			if (*v1==*v2)
				found=true;
		if (!found)
			tmp.push_back(v1);
	}
	return tmp.size();
}

void Concession::trierVehicules(){
	sort(stockVehicules.begin(),stockVehicules.end(),VehiculeSortFunctor());
}
