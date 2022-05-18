
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "The number is even" << endl;
        cout << "The nearest upper odd number is: " << num + 1 << endl;
        cout << "The nearest lower even number is: " << num - 1 << endl;
    } else {
        cout << "The number is odd" << endl;
        cout << "The nearest upper odd number is: " << num << endl;
        cout << "The nearest lower even number is: " << num << endl;
    }
    return 0;
}