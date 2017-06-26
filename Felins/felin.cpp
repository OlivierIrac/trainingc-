
#include "felin.h"

using namespace std;

Felin::Felin (std::string nom, std::string espece, int age):
	m_nom(nom), m_espece(espece), m_age(age) {
}

string Felin::seNourrir() {
	return "Je mange de la viande";
}

string Felin::sePresenter() {
	string s = "Je suis " + m_nom + ", j'ai " + to_string(m_age) + " ans et je suis un " + m_espece +". ";
	return s;
}

std::ostream& operator<< (std::ostream& flux, Felin& felin) {
	flux << felin.sePresenter();
	return flux;
}
