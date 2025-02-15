//wap to swap 2 no's using function
#include<iostream>
using namespace std;

    main() {
        int a,b;
        cout <<"Enter any 2 integer : ";
        cin >> a >> b;

        swap(a, b);
        cout << "After swapping:" <<"\n" << "a = " << a << "\n" << "b = " << b;

    }

          //function prototype
     void swap(int &a, int &b) {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
