#include "pch.h"
#include "../BaseballProject/baseball.cpp"
using namespace std;

TEST(BaseBallGame, ThrowExceptionWhenInputLengthIsUnmatched) {
	Baseball game;
	EXPECT_THROW(game.guess(string("12")), length_error);
}