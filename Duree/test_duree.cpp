# include "gtest/gtest.h"
#include "../src/duree.h"

Duree d1 (1,24,15);
Duree d2 (2,45,53);
Duree d3 (1,24,15);
Duree d4 (1,23,15);
Duree d5 (1,24,14);

TEST(TestDuree, OperatorEqual) {
	EXPECT_EQ (1, d1==d3);
	EXPECT_EQ (0, d1==d2);
}

TEST(TestDuree, OperatorInferior) {
	EXPECT_EQ (1, (d1<d2));
	EXPECT_EQ (0, (d2<d1));
	EXPECT_EQ (0, (d1<d3));
	EXPECT_EQ (1, (d4<d1));
	EXPECT_EQ (1, (d5<d1));
}

TEST(TestDuree, OperatorPlusEqual) {
	d1+=d3;
	EXPECT_EQ ("2h48m30s", d1.affichage());
	d1+=d2;
	EXPECT_EQ ("5h34m23s", d1.affichage());
}

