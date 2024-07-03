#include <string>
#include <stdexcept>
using namespace std;

typedef struct GuessResult_t
{
	bool solved;
	int strikes;
	int balls;
}GuessResult;

class Baseball
{
public:
	explicit Baseball(const string& input) :answer{input}
	{

	}
	GuessResult guess(string input)
	{
		isIllegalArgument(input);
		if (input == answer)
		{
			return { true, 3, 0 };
		}
		return { false, 0, 0 };
	}
	bool isDuplicateNum(string input)
	{
		return input[0] == input[1] || \
			   input[1] == input[2] || \
			    input[2] == input[0];
	}
	void isIllegalArgument(string input)
	{
		if (input.length() != 3)
		{
			throw length_error("Must be three letters\n");
		}
		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] >= '0' && input[i] <= '9') continue;
			throw invalid_argument("Input should be consist of number\n");
		}
		if (isDuplicateNum(input))
		{
			throw invalid_argument("It is not allowed to have the same number\n");
		}
	}
private:
	string answer = "";
};