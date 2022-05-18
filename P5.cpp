
#include <iostream>
using namespace std;
int main() {
    int salary;
    int years;
    cout << "Enter your salary: ";
    cin >> salary;
    cout << "Enter your years of service: ";
    cin >> years;
    if (years >= 10) {
        cout << "Your bonus is: " << salary * 0.1 << endl;
    } else if (years >= 6 && years <= 10) {
        cout << "Your bonus is: " << salary * 0.08 << endl;
    } else {
        cout << "Your bonus is: " << salary * 0.05 << endl;
    }
    return 0;
}