#include <iostream>
using namespace std;

int main()
{
	string firstName; cin >> firstName;
	string secondName; cin >> secondName;
	int age; cin >> age;
	string town; cin >> town;
	cout << "You are " << firstName << " " + secondName + ", a " << age
		<< "-years old person from " << town + ".";
}

