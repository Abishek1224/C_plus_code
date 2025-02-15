/*program to CHECK  whether number is positive or negative.
if the num is pos then check it is even or odd.*/
#include<iostream>
using namespace std;
main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;
    if(n < 0){
            cout << "the number is negative";
    }
        else if(n > 0) {
            if(n % 2 == 0) {
            cout << "the number is positive and even";
        }
        else {
            cout << "the number is positive and odd";
        }
        }
    }
