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
	}
private:

};