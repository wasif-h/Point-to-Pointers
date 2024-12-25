// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : call by reference
#include <bits/stdc++.h>
using namespace std;

void callbyval(int x)
{
    x++; // x is the copy of a
}

void callbyref(int *ptr)
{
    *ptr += 1; // dereferencing
}

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";

    int a = 10;
    cout << a << endl;

    // create copy or mapped the variable a to x
    callbyval(a);
    cout << a << endl; // output is 10 not 11

    // pointer will receive the address and use the main value after derefenrencing
    callbyref(&a);
    cout << a << endl;

    return 0;
}