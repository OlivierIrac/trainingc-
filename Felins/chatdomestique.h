/*
 * chatdomestique.h
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */

#ifndef CHATDOMESTIQUE_H_
#define CHATDOMESTIQUE_H_


#include "felin.h"

class ChatDomestique : public Felin
{
protected:
	std::string m_couleurCollier;

public:
	ChatDomestique (std::string nom, std::string espece, int age, std::string collier);
	std::string seNourrir();
	virtual std::string sePresenter();
};




#endif /* CHATDOMESTIQUE_H_ */
