/*
 * main.cpp
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */
#include <array>

#include "felin.h"
#include "chatsauvage.h"
#include "chatdomestique.h"
using namespace std;

int main () {
//	Felin monFelin ("choupette", "felin" , 8);
//	cout << monFelin.sePresenter() << " " << monFelin.seNourrir() << "\n";
	ChatSauvage monChatSauvage ("tigrou", "sauvage", 10, "souris");
//	cout << monChatSauvage.sePresenter() << " " << monChatSauvage.seNourrir()  << "\n";
//	cout << monChatSauvage.sePresenter() << " " << monChatSauvage.seNourrir("poisson")  << "\n";
	ChatDomestique monChatDomestique ("Twenty", "domestique", 5, "rouge");


//	cout << monChatDomestique.sePresenter() << monChatDomestique.seNourrir() << "\n";

// EXO Polymorphisme
//  array <Felin*, 2> mesFelins {&monChatSauvage, &monChatDomestique};
//	for (Felin* felin:mesFelins)
//	cout << felin->sePresenter() << "\n";

//EXO opérateur cout
	cout<< monChatDomestique << endl;
	cout<< monChatSauvage << endl;

}

