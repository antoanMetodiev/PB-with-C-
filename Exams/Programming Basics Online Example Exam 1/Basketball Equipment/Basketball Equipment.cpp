#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	int yearTaxes; cin >> yearTaxes;

	double priceForShoes = yearTaxes - (yearTaxes * 0.40);
	double priceForClothing = priceForShoes - (priceForShoes * 0.20);
	double priceForBall = priceForClothing * 0.25;
	double priceForAccessories = priceForBall * 0.20;

	printf("%.2f", yearTaxes + priceForShoes + priceForClothing + priceForBall + priceForAccessories);
}

