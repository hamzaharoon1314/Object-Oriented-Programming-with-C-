
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the value of a side of the triangle: ";
    cin >> a;
    cout << "Enter the value of b side of the triangle: ";
    cin >> b;
    cout << "Enter the value of c side of the triangle: ";
    cin >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "The triangle is valid" << endl;
    } else {
        cout << "The triangle is not valid" << endl;
    }
    return 0;
}