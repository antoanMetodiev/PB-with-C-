#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int current = 1; 
    bool shouldBreak = false; 

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            if (current > n) {
                shouldBreak = true;
                break;
            }
            cout << current << " "; 
            current++;
        }
        cout << endl; 

        if (shouldBreak) { 
            break;
        }
    }
    return 0;
}
