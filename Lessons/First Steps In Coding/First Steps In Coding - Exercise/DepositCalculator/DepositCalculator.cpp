#include <iostream>
using namespace std;

int main()
{
	double depositSum; cin >> depositSum;
	int deadline; cin >> deadline;
	double yearInterestPercent; cin >> yearInterestPercent;
	yearInterestPercent = depositSum * yearInterestPercent / 100;
	double perMonth = (yearInterestPercent / 12);

	double sum = depositSum + (deadline * perMonth);
	cout << sum;
}
