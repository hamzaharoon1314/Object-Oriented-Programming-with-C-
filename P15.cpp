
#include <iostream>
using namespace std;
int main() {
    int phy, chem, bio, math, comp, obt;
    float percentage;
    char grade;
    string subjects[5] = {"Physics", "Chemistry", "Biology", "Mathematics", "Computer"};
    int arr[5] = {phy, chem, bio, math, comp};
    cout << "Enter marks of five subjects: "<<endl;
    // input marks
    for (int i = 0; i < 5; i++) {
        cout<<"Makrs of "<<subjects[i]<<": ";
        cin>>arr[i];
        // check if marks are valid
        if (arr[i] < 0 || arr[i] > 100) {
            cout<<"Invalid marks"<<endl;
            return 0;
        }
    }
    // calculate total marks
    for (int i = 0; i < 5; i++) {
        obt += arr[i];  
    }
    percentage = obt / 500 * 100;
    // Grade
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }
    cout<<"Total marks: "<<obt<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    cout<<"Grade: "<<grade<<endl;

    return 0;
}