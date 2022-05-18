
#include <iostream>
using namespace std;
int main() {
    int markedPrice;
    cout << "Enter the marked price: ";
    cin >> markedPrice;
    int discount;
    if (markedPrice > 10000) {
        discount = 20;
    } else if (markedPrice > 7000 && markedPrice <= 10000) {
        discount = 15;
    } else {
        discount = 10;
    }
    cout << "Discount is: " << discount << "%" << endl;
    int payAmount = markedPrice - (markedPrice * discount / 100);
    cout << "The final amount is: " << payAmount << endl;
    return 0;
}