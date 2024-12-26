// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : char array
#include <bits/stdc++.h>
using namespace std;

void showarrptr(const char *arr)
// if we use const then we can only read not write(change the value)
{
    while (*arr != '\0')
    {
        cout << *(arr) << endl;
        arr++; // change the reference to the next element
    }
}

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";

    char *a = "JHON"; // this means - string gets strored at complie time constant
    
    int sizearr = sizeof(a) / sizeof(a[0]);

    showarrptr(a);

    return 0;
}