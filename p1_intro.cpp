// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : Pointer                                                 
#include <bits/stdc++.h>
using namespace std;


// <<<---------  main function   --------->>> 
int main()
{

    cout << "---- Code with Wasif ----\n\n";
    cout << "------int pointer -------"<<endl;

    int a = 5;
    int *ptr; // pointer variable
    ptr = &a; // &a means the reference of variable a and we are storing this reference into pointer variable ptr 
    cout << a << endl;
    cout << ptr << endl;
    cout << &a << endl;
    cout << &ptr << endl;
    // dereferencing
    cout << *ptr << endl;

    cout << "------char pointer -------"<<endl;

    char b = 'f';
    char *pchr;
    pchr = &b;
    cout << b << endl;
    cout << pchr << endl;
    cout << &b << endl;
    cout << &pchr << endl;
    // dereferencing
    cout << *pchr << endl;



    return 0;
}