#include "MessageValidator.h"
#include <array>
using namespace std;

bool MessageValidator::checkThreeFirstChars(std::string msg){
	array<string,4> validThreeFirstChars = {"FRA", "BEL", "LUX", "SUI"};
	for (auto s:validThreeFirstChars)
		if (!msg.compare (0,3,s))
			return true;
	return false;
}

bool MessageValidator::checkLenght(std::string msg){
	if (msg.length()>=4 && msg.length()<=20)
		return true;
	else
		return false;
}

std::string MessageValidator::validateMessage() {
	std::string output;
	std::string input;
	if (interfaceQueueMessages->isQueueEmpty()){
		output="";
		return output;
	}
	else {
		input=interfaceQueueMessages->giveMessage();
		if (checkThreeFirstChars(input) && checkLenght(input)){
			return input;
		}
		else{
			output = "ERROR:" + input;
			return output;
		}

	}
}
