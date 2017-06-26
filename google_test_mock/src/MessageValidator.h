/*
 * MessageValidator.h
 *
 *  Created on: 2 juin 2017
 *      Author: irac1
 */

#ifndef SRC_MESSAGEVALIDATOR_H_
#define SRC_MESSAGEVALIDATOR_H_

#include "InterfaceQueueMessages.h"

class MessageValidator {
protected:
	InterfaceQueueMessages* interfaceQueueMessages;
	bool checkThreeFirstChars(std::string msg);
	bool checkLenght(std::string msg);
public:
	MessageValidator(InterfaceQueueMessages* queue): interfaceQueueMessages(queue){};
	std::string validateMessage();
};

#endif /* SRC_MESSAGEVALIDATOR_H_ */
