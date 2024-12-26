// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : Pointer Arithmetic
#include <bits/stdc++.h>
using namespace std;

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";

    double a = 5;
    double *p = &a;

    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << p + 1 << endl;    // previous + 4 byte
    cout << *(p + 1) << endl; // garbage

    return 0;
}