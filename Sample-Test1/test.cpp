#include "pch.h"
#include "../BaseballProject/baseball.cpp"
using namespace std;

class BaseballFixture : public testing::Test 
{
public:
	Baseball game;
	void assertIllegalArgument(string guessNumber)
	{
		try
		{
			game.guess(guessNumber);
			FAIL();
		}
		catch (exception e)
		{

		}
	}
};

TEST_F(BaseballFixture, ThrowExceptionWhenInputInvalid) 
{
	assertIllegalArgument("12");
	assertIllegalArgument("12s");
	assertIllegalArgument("121");
}