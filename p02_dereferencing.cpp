// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : dereferencing
#include <bits/stdc++.h>
using namespace std;

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";

    // ptr -> address
    // *ptr -> value stored in that address

    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;
    cout << *ptr << endl;

    int b = 2;
    *ptr = b; // it will change the value of a but not the address
    cout << ptr << endl;
    cout << *ptr << endl;

    // to change the address stored in ptr
    ptr = &b;
    cout << ptr << endl;
    cout << *ptr << endl; 

    return 0;
}