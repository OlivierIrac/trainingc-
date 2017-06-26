/*
 * main.cpp
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#include <initializer_list>
#include "Duree.h"
using namespace std;

function <bool (Duree,Duree)> sortSeconds = [] (Duree d1, Duree d2) {
	if (d1.getSecondes()<d2.getSecondes())
		return true;
	else
		return false;
};


class VectorInt{
protected:
	vector<int> vectorInt;
public:
	VectorInt(vector<int>);
	VectorInt(initializer_list<int>);
	void afficher();
	void afficherSecond();
};

VectorInt::VectorInt(vector<int> v) : vectorInt(v){}

VectorInt::VectorInt(initializer_list<int> ilist) {
	vectorInt=ilist;
}

void VectorInt::afficher() {
	for (auto c:vectorInt)
		cout << c << " ";
	cout <<endl;
}

void VectorInt::afficherSecond() {
	cout << vectorInt[2];
	cout <<endl;
}

int main () {
	vector<Duree> durees {Duree(2,50,10), Duree(1,40,90), Duree(6,20,20)};

	map<string,Duree> horaires;
	horaires["Paris-Orleans"] = Duree(1,40,00);
	horaires["Paris-Lyon"] = Duree(2,50,00);
	horaires["Paris-Nice"] = Duree(6,20,00);

	cout<<"valeurs initiales" << endl;
	for (Duree duree:durees)
		cout<< duree.affichage()<<endl;

//	for (pair<string,Duree> horaire:horaires)
//		cout << horaire.first << " " << horaire.second.affichage() << endl;
//
//	durees.insert (durees.begin()+1, Duree(18,30,40));
//	durees.erase (durees.begin()+2);
//	for (Duree duree:durees)
//		cout<<duree.affichage()<<endl;

	cout<< "Tri normal"<<endl;
	sort (durees.begin(), durees.end());
	for (Duree duree:durees)
		cout<< duree.affichage()<<endl;

	cout<< "Tri foncteur sur minutes"<<endl;
	sort (durees.begin(), durees.end(), DureeFonctor());
	for (Duree duree:durees)
		cout<<  duree.affichage()<<endl;

	cout<< "Tri lambda sur secondes"<<endl;
	sort (durees.begin(), durees.end(), sortSeconds);
	for (Duree duree:durees)
		cout<<  duree.affichage()<<endl;

	VectorInt myVectorInt1({1, 2, 3, 5, 6});
	VectorInt myVectorInt2(myVectorInt1);
	myVectorInt1.afficher();
	myVectorInt2.afficher();
	myVectorInt1.afficherSecond();
	return 0;
}

