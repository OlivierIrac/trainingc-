/*
 * InterfaceQueueMessages.cpp
 *
 *  Created on: 2 juin 2017
 *      Author: irac1
 */


#include "InterfaceQueueMessages.h"

bool InterfaceQueueMessages::isQueueEmpty() {
	return true;
}

std::string InterfaceQueueMessages::giveMessage() {
	std::string msg="sui c'est un test";
	return msg;
}
