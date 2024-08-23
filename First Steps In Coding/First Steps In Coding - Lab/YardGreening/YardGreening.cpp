#include <iostream>
using namespace std;

int main()
{
    double fieldMetters; cin >> fieldMetters;
    double pricePerMetter = 7.61;
    double discount = (fieldMetters  * pricePerMetter) * 0.18;
    double finalPrice = (fieldMetters * pricePerMetter) - discount;

    cout << "The final price is: " << finalPrice << " lv." << endl;
    cout << "The discount is: " << discount << " lv.";
}