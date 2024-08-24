#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main()
{
    int minNum = numeric_limits<int>::max();

    string input; getline(cin, input);
    while (input != "Stop") {

        int currentNumber = stoi(input);
        if (currentNumber < minNum) minNum = currentNumber;

        getline(cin, input);
    }

    cout << minNum;
}
