#include <string>
#include <stdexcept>
using namespace std;
class Baseball
{
public:
	void guess(string input)
	{
		isIllegalArgument(input);
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

};