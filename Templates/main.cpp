/*
 * main.cpp
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */

#include "felin_template.h"
#include "maxarray.h"
using namespace std;

int main () {
	Felin<int> monFelinInt ("choupette", "felin" , 8);
	cout << monFelinInt.sePresenter() << " " << monFelinInt.seNourrir() << "\n";
	Felin<string> monFelinString ("choupette", "felin" , "huit");
	cout << monFelinString.sePresenter() << " " << monFelinString.seNourrir() << "\n";

	array <int,5> nombres = {12, 13, 123, 2, 122};
	auto a=max(nombres);
	cout << a;
	array <string,5> prenoms = {"karine", "olivier", "louis", "margot", "antoine"};
	auto b=max(prenoms);
	cout << b;
	array <char,5> lettres = {'r', 'y', 'u', 'i', 's'};
	auto c=max(lettres);
	cout << c;
	decltype(a) a1=1024;
	nombres[1]=a1;
	decltype(b) b1="zygo";
	prenoms[1]=b1;
	decltype(c) c1='z';
	lettres[1]=c1;

	cout << max(nombres);

	cout << max(prenoms);

	cout << max(lettres);


	return 0;
}

