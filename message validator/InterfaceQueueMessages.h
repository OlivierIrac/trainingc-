/*
 * InterfaceQueueMessages.h
 *
 *  Created on: 2 juin 2017
 *      Author: irac1
 */

#ifndef SRC_INTERFACEQUEUEMESSAGES_H_
#define SRC_INTERFACEQUEUEMESSAGES_H_

#include <iostream>

class InterfaceQueueMessages{
public:
	virtual ~InterfaceQueueMessages(){};
	virtual bool isQueueEmpty();
	virtual std::string giveMessage();
};

#endif /* SRC_INTERFACEQUEUEMESSAGES_H_ */
