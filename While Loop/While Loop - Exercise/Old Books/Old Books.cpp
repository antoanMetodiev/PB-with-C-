#include <iostream>
#include <string>
using namespace std;

int main()
{
    string searchedBook; getline(cin, searchedBook);

    string input; getline(cin, input);
    int booksCount = 0;
    bool isFounded = false;
    while (input != "No More Books") {

        if (input == searchedBook) {
            isFounded = true;
            cout << "You checked " << booksCount << " books and found it.";
            break;
        }
        booksCount++;
        getline(cin, input);
    }

    if (!isFounded) cout << "The book you search is not here!\n" << "You checked " << booksCount << "books.";
}
