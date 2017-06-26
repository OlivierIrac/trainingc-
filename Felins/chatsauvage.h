/*
 * chatsauvage.h
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */

#ifndef CHATSAUVAGE_H_
#define CHATSAUVAGE_H_

#include "felin.h"

class ChatSauvage : public Felin
{
protected:
	std::string m_proiePreferee;

public:
	ChatSauvage (std::string nom, std::string espece, int age, std::string proie);
	ChatSauvage (std::string nom, std::string proie);
	std::string seNourrir();
	std::string seNourrir(std::string proie);
	virtual std::string sePresenter();
};

#endif /* CHATSAUVAGE_H_ */
