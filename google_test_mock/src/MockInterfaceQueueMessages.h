/*
 * MockInterfaceQueueMessages.h
 *
 *  Created on: 2 juin 2017
 *      Author: irac1
 */

#ifndef SRC_MOCKINTERFACEQUEUEMESSAGES_H_
#define SRC_MOCKINTERFACEQUEUEMESSAGES_H_

#include <iostream>
#include "gmock/gmock.h"
#include "InterfaceQueueMessages.h"

class MockInterfaceQueueMessages : public InterfaceQueueMessages{
public:
	MOCK_METHOD0 (isQueueEmpty, bool());
	MOCK_METHOD0 (giveMessage, std::string());
};

#endif /* SRC_MOCKINTERFACEQUEUEMESSAGES_H_ */
