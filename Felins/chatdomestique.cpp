/*
 * chatdomestique.cpp
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */

#include "chatdomestique.h"

using namespace std;

ChatDomestique::ChatDomestique (string nom, string espece, int age, string collier):
	Felin(nom, espece, age), m_couleurCollier(collier) {
}

string ChatDomestique::seNourrir() {
	return "Je mange des croquettes";
}

string ChatDomestique::sePresenter() {
	string s=Felin::sePresenter()+"Mon collier est de couleur " + m_couleurCollier + ". ";
	return s;
}


