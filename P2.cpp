
#include <iostream>
using namespace std;
int main() {
    int age1, age2, age3;
    cout << "Enter age of first person: ";
    cin >> age1;
    cout << "Enter age of second person: ";
    cin >> age2;
    cout << "Enter age of third person: ";
    cin >> age3;
    if (age1 < age2 && age1 < age3) {
        cout << "The youngest person is " << age1 << endl;
    } else if (age2 < age1 && age2 < age3) {
        cout << "The youngest person is " << age2 << endl;
    } else {
        cout << "The youngest person is " << age3 << endl;
    }
    return 0;
}