#include <iostream>
#include <array>
#include <string>
#include "Sorting.h"

using std::cout;
using std::cin;


int main()
{
	char ans;
	bool loop = true;
	int copyArr[100];
	string uString = "Test";
	hMap<string, int> tN;
	hMap<string, int> cN;
	tN["test"] = 5;
	while (loop)
	{
		cout << "Please enter a string\n";
		cin >> ans;
		std::getline(cin, uString);
		cout << "Hash: " << hash(uString);

		tN["uHash"] = hash(uString);
		cout << "\nHash Map: " << tN["uHash"];
		cN = tN;
		cout << "\nCopied Hash Map:" << cN["uHash"];

		cout << "\nWould you like to hash another?\n[Y]/[N]\n";
		cin >> ans;
		char(tolower(ans));
		if (ans == 'n')
		{
			loop = false;
		}
		else {}
	}
	return 0;
}