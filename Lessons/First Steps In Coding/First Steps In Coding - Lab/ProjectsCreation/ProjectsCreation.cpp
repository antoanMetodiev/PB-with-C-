#include <iostream>
using namespace std;

int main()
{
    string architectName; cin >> architectName;
    int projectsCount; cin >> projectsCount;

    cout << "The architect " << architectName << " will need " << (projectsCount * 3) << " hours to complete "
        << projectsCount << " project/s.";
}
