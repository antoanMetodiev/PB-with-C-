#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int people; cin >> people;
    cin.ignore();

    int back = 0;
    int chest = 0;
    int legs = 0;
    int abs = 0;

    int proteinShake = 0;
    int proteinBar = 0;
    int trainedPeople = 0;
    string input;

    for (int i = 0; i < people; i++)
    {
        getline(cin, input);

        if (input == "Back") {
            back++;
            trainedPeople++;
        }
        else if (input == "Chest") {
            chest++;
            trainedPeople++;
        }
        else if (input == "Legs") {
            legs++;
            trainedPeople++;
        }
        else if (input == "Abs") {
            abs++;
            trainedPeople++;
        }
        else if (input == "Protein shake") {
            proteinShake++;
        }
        else if (input == "Protein bar") {
            proteinBar++;
        }
    }

    printf("%d - back\n", back);
    printf("%d - chest\n", chest);
    printf("%d - legs\n", legs);
    printf("%d - abs\n", abs);
    printf("%d - protein shake\n", proteinShake);
    printf("%d - protein bar\n", proteinBar);

    double workoutPercentage = (trainedPeople / (double)people) * 100;
    double proteinPercentage = ((proteinShake + proteinBar) / (double)people) * 100;

    printf("%.2f%% - work out\n", workoutPercentage);
    printf("%.2f%% - protein\n", proteinPercentage);
    return 0;
}
