// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : array and pointer
#include <bits/stdc++.h>
using namespace std;

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";

    int arr[] = {9, 7, 5, 3, 1};

    // if I print arr , it will show the address of the first element of that array

    cout << arr << endl;
    cout << &arr[0] << endl; // same as arr

    cout << arr[0] << endl;
    cout << *arr << endl; // deref. the address at element 0
    cout << arr[1] << endl;
    cout << *(arr + 1) << endl; // deref. the address at element 0 + 1 = 1

    // now lets take a loop
    int a[5] = {2, 3, 4, 5, 6};
    for (int i = 0; i < 5; i++)
    {
        cout << a << endl;
        cout << (a + i) << endl;
        cout << &a[i] << endl;
        cout << a[i] << endl;
        cout << *(a + i) << endl;
    }

    // so we can know that array name and pointer name would work similerly because both indicate the address of first element
    cout << "Are pointer of array is same as the name of Array ? ------" << endl;
    int b[] = {1,2,3,4,5};
    int *ptr = b;
    cout << b[2] << endl;
    cout << ptr[2] << endl;
    cout << *(ptr + 2) << endl;

    return 0;
}