// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : pointer to pointer
#include <bits/stdc++.h>
using namespace std;

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";

    int x = 10;
    int *p = &x;
    int **q = &p;
    int ***r = &q;
    // test 1
    cout << x << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << *(*q) << endl;
    cout << r << endl;
    cout << *(*(*r)) << endl;

    // test 2
    ***r = 5;
    cout << x << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << *(*q) << endl;
    cout << r << endl;
    cout << *(*(*r)) << endl;

    return 0;
}