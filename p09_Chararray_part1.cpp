// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : char array
#include <bits/stdc++.h>
using namespace std;

void showarr(char arr[], int sizearr)
{
    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i] << endl;
        i++;
    }
}

void showarrptr(char *arr)
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

    char a[] = "JHON";
    int sizearr = sizeof(a) / sizeof(a[0]);
    showarr(a, sizearr);
    cout << "---------------" << endl;
    cout << &a << endl;
    showarrptr(a);
    cout << &a << endl;

    return 0;
}