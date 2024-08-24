#include <iostream>
using namespace std;

int main()
{
    int totalPages; cin >> totalPages;
    int pagesPerHour; cin >> pagesPerHour;
    int days; cin >> days;

    int forDay = totalPages / pagesPerHour;
    cout << forDay / days << endl;
}