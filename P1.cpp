#include <iostream>
using namespace std;
int main() {
    int salary, yearOfService;
    cout << "Enter your salary: ";
    cin >> salary;
    cout << "Enter your year of service: ";
    cin >> yearOfService;
    if (yearOfService > 5) {
        cout << "Your net bonus is: " << salary * 0.05 << endl;
    } else {
        cout << "Your net bonus is: 0" << endl;
    }
    return 0;
}