#include <iostream>
using namespace std;

int main()
{
	int number; cin >> number;

	int loopNum = 1;
	while (number >= loopNum) {
		cout << loopNum;
		loopNum = (loopNum * 2) + 1;
	}
}
