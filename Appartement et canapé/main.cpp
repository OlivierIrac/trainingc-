/*
 * main.cpp
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */

#include "appartement.h"
#include "canape.h"

using namespace std;

int main()
{
	array <unique_ptr<Canape>,5> mesCanapes = {	make_unique<Canape> (3, "uni", "beige"),
												make_unique<Canape> (4, "rayé", "rouge"),
												make_unique<Canape> (0, "uni", "beige"),
												make_unique<Canape> (0, "uni", "beige"),
												make_unique<Canape> (0, "uni", "beige")
												};

	Appartement monAppart1 (3, 60, "blancs", "plancher", move(mesCanapes));


	monAppart1.description();
	//monAppart.repeindre("rouges");
	//monAppart.description();
	//cout<<monAppart.getNombreCanapes()<<" canapés.";
	Appartement monAppart2 (monAppart1);
	monAppart1.description();

//	mesCanapes[0]->changerCouleur("bleu");
	monAppart1.description();
	monAppart2.description();

	try {
		monAppart1.setNombrePieces(2);
		monAppart2.setNombrePieces(0);
	}
	catch (std::exception const& e){
		cerr << e.what() << endl;
	}
	//monCanape->changerCouleur ("rouge et blanc");
	//monCanape->descriptionCanape();
	//monAppart.description();
	monAppart1.description();
	monAppart2.description();


	return 0;
}

