#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input; getline(cin, input);
    while (input != "Stop") {
        cout << input << endl;
        getline(cin, input);
    }
}
