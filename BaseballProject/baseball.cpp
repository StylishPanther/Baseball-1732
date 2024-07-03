#include <string>
#include <stdexcept>
using namespace std;
class Baseball
{
public:
	string guess(string input)
	{
		if (input.length() != 3)
		{
			throw length_error("Must be three letters\n");
		}
		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] >= '0' || input[i] <= '9')
			{
				throw invalid_argument("Input should be consist of number\n");
			}
		}
	}
private:

};