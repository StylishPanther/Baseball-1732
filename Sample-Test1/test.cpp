#include "pch.h"
#include "../BaseballProject/baseball.cpp"
using namespace std;

class BaseballFixture : public testing::Test 
{
public:
	Baseball game{ "123" };
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

#if 0
TEST_F(BaseballFixture, ThrowExceptionWhenInputInvalid) 
{
	assertIllegalArgument("12");
	assertIllegalArgument("12s");
	assertIllegalArgument("121");
}
#endif
TEST_F(BaseballFixture, ThrowExceptionWhenInputisValid)
{
	GuessResult result = game.guess("123");

	EXPECT_TRUE(result.solved);
	EXPECT_EQ(3, result.strikes);
	EXPECT_EQ(0, result.balls);
	
}
