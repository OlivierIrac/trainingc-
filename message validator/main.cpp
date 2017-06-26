/*
 * main.cpp
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */

#include "MessageValidator.h"
#include "InterfaceQueueMessages.h"
using namespace std;


int main () {
	InterfaceQueueMessages queue;
	MessageValidator messageValidator(&queue);
	cout << messageValidator.validateMessage();
	return 0;
}

