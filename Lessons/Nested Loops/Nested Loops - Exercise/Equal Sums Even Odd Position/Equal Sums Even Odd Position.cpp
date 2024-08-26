#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int num1; cin >> num1;
    int num2; cin >> num2;

	for (int i = num1; i <= num2; i++)
	{
		string currentNumber = to_string(i);
		int even = 0;
		int odd = 0;

		for (int j = 0; j < currentNumber.length(); j++)
		{
			if (j % 2 == 0)
			{
				even += stoi(to_string(currentNumber.at(j)));
			} 
			else 
			{
				odd += stoi(to_string(currentNumber.at(j)));
			}
		}

		if (even == odd && (even > 0 && odd > 0)) cout << currentNumber << " ";
	}
}

