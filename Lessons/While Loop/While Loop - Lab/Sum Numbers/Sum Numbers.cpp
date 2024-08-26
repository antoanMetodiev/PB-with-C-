#include <iostream>
using namespace std;

int main()
{
	int number; cin >> number;
	int sum = 0;
	while (number > sum) {
		int currentNumber; cin >> currentNumber;
		sum += currentNumber;
	}

	cout << sum;
}
