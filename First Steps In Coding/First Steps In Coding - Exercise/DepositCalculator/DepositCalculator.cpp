#include <iostream>
using namespace std;

int main()
{
	// interest - лихва

	// сума = депозирана сума  + срок на депозита * ((депозирана сума * годишен лихвен процент ) / 12)

	double depositSum; cin >> depositSum;
	int deadline; cin >> deadline;
	double yearInterestPercent; cin >> yearInterestPercent;
	yearInterestPercent = depositSum * yearInterestPercent / 100;
	double perMonth = (yearInterestPercent / 12);

	double sum = depositSum + (deadline * perMonth);

	cout << sum;
}
