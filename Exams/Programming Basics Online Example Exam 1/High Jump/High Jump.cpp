#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int neededHeight;
    cin >> neededHeight;
    int currentJumpNeededHeight = neededHeight - 30;

    int allJumps = 0;
    int failedCount = 0;

    while (true) {
        int hisCurrentJump; cin >> hisCurrentJump;
        allJumps++;

        if (hisCurrentJump > currentJumpNeededHeight) {
            failedCount = 0;

            if (currentJumpNeededHeight + 5 > neededHeight) {
                printf("Tihomir succeeded, he jumped over %dcm after %d jumps.\n", currentJumpNeededHeight, allJumps);
                return 0;
            }

            currentJumpNeededHeight += 5;
        }
        else {
            failedCount++;
            if (failedCount == 3) {
                printf("Tihomir failed at %dcm after %d jumps.\n", currentJumpNeededHeight, allJumps);
                return 0;
            }
        }
    }
}
