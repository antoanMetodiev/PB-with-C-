#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
	int wins = 0;
	int loses = 0;
	int draws = 0;
	for (int i = 0; i < 3; i++)
	{
		string input; getline(cin, input);
		int myGoals = stoi(string(1, input.at(0)));
		int otherTeamGoals = stoi(string(1, input.at(input.length() - 1)));
		
		if (myGoals > otherTeamGoals) wins++;
		else if (myGoals < otherTeamGoals) loses++;
		else draws++;
	}

	printf("Team won %d games.\n", wins);
	printf("Team lost %d games.\n", loses);
	printf("Drawn games: %d\n", draws);
}

