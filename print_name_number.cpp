#include <iostream>
#include <string>

using namespace std;

bool print(string *name, int number, const int C)
{
	if (number < 1 || number > C)
	{
		cout << "INPUT ERROR\n";
		return false;
	}
	cout << name[number - 1] << endl;
	return true;
}

int main(void)
{
	const int C = 10;
	string name[C] = {" "};
	string *ptrname = name;
	for (int i = 0; i < C; i++)
	{
		cout << "Enter the name of tenant #" << i + 1 << ": ";
		cin >> name[i];
	}

	for (int i = 0; i < 3; i++)
	{
		int number = 0;
		cout << "Enter the appartament number: ";
		cin >> number;
		if (!print(ptrname, number, C))
		{
			--i;
			continue;
		}
	}

	return 0;
}