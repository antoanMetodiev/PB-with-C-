#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name; getline(cin, name);
    string password; getline(cin, password);

    string input; getline(cin, input);
    while (input != password) {
        getline(cin, input);
    }

    cout << "Welcome " << name << "!";
}
