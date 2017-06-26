/*
 * felin.h
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */

#ifndef FELIN_H_
#define FELIN_H_

#include <iostream>


class Felin
{
protected:
	std::string m_nom;
	std::string m_espece;
	int m_age;

public:
	Felin (std::string nom, std::string espece, int age);
	virtual std::string seNourrir()=0;
	virtual std::string sePresenter();
};

std::ostream& operator<< (std::ostream &flux, Felin& felin);


#endif /* FELIN_H_ */
