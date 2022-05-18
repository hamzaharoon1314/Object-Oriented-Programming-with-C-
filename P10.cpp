
#include <iostream>
using namespace std;
int main() {
    int storage;
    cout << "Enter the storage capacity in GB: ";
    cin >> storage;
    int storage_mb = storage * 1024;
    cout << "The storage capacity in MBs is: " << storage_mb << endl;
    return 0;
}