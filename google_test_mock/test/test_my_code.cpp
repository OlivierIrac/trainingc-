//test_factorial.cpp

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <../src/MockInterfaceQueueMessages.h>
#include <../src/MessageValidator.h>
using ::testing::Return;

TEST(messageValidator, goodMessage) {
	MockInterfaceQueueMessages mockQueue;
	MessageValidator msgVal (&mockQueue);
	EXPECT_CALL (mockQueue, isQueueEmpty())
		.Times(1)
		.WillOnce (Return(false));
	EXPECT_CALL (mockQueue, giveMessage())
		.Times(1)
		.WillOnce (Return("FRA valid message"));
	EXPECT_EQ ("FRA valid message",msgVal.validateMessage());
}

TEST(messageValidator, invalid3firstchars) {
	MockInterfaceQueueMessages mockQueue;
	MessageValidator msgVal (&mockQueue);
	EXPECT_CALL (mockQueue, isQueueEmpty())
		.Times(1)
		.WillOnce (Return(false));
	EXPECT_CALL (mockQueue, giveMessage())
		.Times(1)
		.WillOnce (Return("ZZZ invalid message"));
	EXPECT_EQ ("ERROR:ZZZ invalid message",msgVal.validateMessage());
}

TEST(messageValidator, msgtoosmall) {
	MockInterfaceQueueMessages mockQueue;
	MessageValidator msgVal (&mockQueue);
	EXPECT_CALL (mockQueue, isQueueEmpty())
		.Times(1)
		.WillOnce (Return(false));
	EXPECT_CALL (mockQueue, giveMessage())
		.Times(1)
		.WillOnce (Return("FRA"));
	EXPECT_EQ ("ERROR:FRA",msgVal.validateMessage());
}

TEST(messageValidator, msgtoobig) {
	MockInterfaceQueueMessages mockQueue;
	MessageValidator msgVal (&mockQueue);
	EXPECT_CALL (mockQueue, isQueueEmpty())
		.Times(1)
		.WillOnce (Return(false));
	EXPECT_CALL (mockQueue, giveMessage())
		.Times(1)
		.WillOnce (Return("FRA 12345678901234567890"));
	EXPECT_EQ ("ERROR:FRA 12345678901234567890",msgVal.validateMessage());
}

TEST(messageValidator, emptyqueue) {
	MockInterfaceQueueMessages mockQueue;
	MessageValidator msgVal (&mockQueue);
	EXPECT_CALL (mockQueue, isQueueEmpty())
		.Times(1)
		.WillOnce (Return(true));
	EXPECT_EQ ("",msgVal.validateMessage());
}
