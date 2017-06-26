#include "chatsauvage.h"

using namespace std;

ChatSauvage::ChatSauvage (string nom, string espece, int age, string proie):
	Felin(nom, espece, age), m_proiePreferee(proie) {
}

ChatSauvage::ChatSauvage (string nom,  string proie):
	Felin(nom,"fauve",0), m_proiePreferee(proie) {
}

string ChatSauvage::seNourrir() {
	return "Je mange " + m_proiePreferee+". ";
}

string ChatSauvage::seNourrir(string proie) {
	return "Je mange " + proie + ". ";
}

string ChatSauvage::sePresenter() {
	return Felin::sePresenter() + "Ma proie préférée est " + m_proiePreferee+". ";
}
