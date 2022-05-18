
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    while (n > 999 || n < 100) {
        cout << "Enter a number: ";
        cin >> n;
    }
    cout << "The number in reverse order is: ";
    while (n > 0) {
        cout << n % 10;
        n = n / 10;
    }
    return 0;
}