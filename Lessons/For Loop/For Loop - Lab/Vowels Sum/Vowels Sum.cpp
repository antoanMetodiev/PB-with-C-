#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word; getline(cin, word);
	int sum = 0;
	for (int i = 0; i < word.length(); i++)
	{
		if (word.at(i) == 'a') sum += 1;
		if (word.at(i) == 'e') sum += 2;
		if (word.at(i) == 'i') sum += 3;
		if (word.at(i) == 'o') sum += 4;
		if (word.at(i) == 'u') sum += 5;
	}

	cout << sum;
}

