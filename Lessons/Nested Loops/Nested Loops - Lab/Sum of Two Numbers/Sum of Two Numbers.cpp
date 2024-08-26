#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int startNumber; cin >> startNumber;
    int endNumber; cin >> endNumber;
    int magicNumber; cin >> magicNumber;

    int successCombinations = 0;

    for (int i = startNumber; i <= endNumber; i++)
    {
        for (int j = startNumber; j <= endNumber; j++)
        {
            successCombinations++;
            if (i + j == magicNumber) {
                printf("Combination N:%d (%d + %d = %d)", successCombinations, i, j, i + j);
                return 0;
            }
        }
    }
    
    printf("%d combinations - neither equals %d", successCombinations, magicNumber);
}
