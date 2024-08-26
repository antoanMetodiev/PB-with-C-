#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main()
{
    int biggestNum = numeric_limits<int>::min();

    string input; getline(cin, input);
    while (input != "Stop") {

        int currentNumber = stoi(input);
        if (currentNumber > biggestNum) biggestNum = currentNumber;

        getline(cin, input);
    }

    cout << biggestNum;
}
