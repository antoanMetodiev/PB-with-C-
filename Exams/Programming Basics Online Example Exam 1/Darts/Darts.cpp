#include <iostream>
#include <cstdio>
#include <string>
#include <limits>
using namespace std;

int main()
{
    int initialPoints = 301;
    string player;
    getline(cin, player); 

    string action;
    int shotsCount = 0;
    int failedShotsCount = 0;
    getline(cin, action);

    while (action != "Retire")
    {
        if (action == "Triple" || action == "Double" || action == "Single")
        {
            string pointsStr;
            getline(cin, pointsStr); 

            int points = stoi(pointsStr); 

            if (action == "Triple") {
                points *= 3;
            }
            else if (action == "Double") {
                points *= 2;
            }

            if (points <= initialPoints) {
                initialPoints -= points;
            }
            else {
                failedShotsCount++;
            }

            shotsCount++;
        }

        if (initialPoints == 0)
        {
            printf("%s won the leg with %d shots.\n", player.c_str(), shotsCount - failedShotsCount);
            return 0;
        }

        getline(cin, action); 
    }

    printf("%s retired after %d unsuccessful shots.\n", player.c_str(), failedShotsCount);
}
