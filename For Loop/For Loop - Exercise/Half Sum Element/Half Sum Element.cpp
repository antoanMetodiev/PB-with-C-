#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

int main()
{
	int n; cin >> n;
	int biggestNum = numeric_limits<int>::min();
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int currentNumber; cin >> currentNumber;
		if (currentNumber > biggestNum) biggestNum = currentNumber;
		sum += currentNumber;
	}

	int diff = sum - biggestNum;
	if (diff == biggestNum) cout << "Yes\n" << "Sum = " << biggestNum;
	else cout << "No\n" << "Diff = " << abs(biggestNum - diff);
}