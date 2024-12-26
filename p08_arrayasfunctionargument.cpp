// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : p8_array as function argument
#include <bits/stdc++.h>
using namespace std;

int sum1(int arr[], int n)
{
    int total = 0;

    cout << "Size of arr " << sizeof(arr) << endl;
    cout << "Size of arr[0] " << sizeof(arr[0]) << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        total += arr[i];
    }
    return total;
}

// lets do it with pointer which is the behind the scene of sum1 function
 
int sum2(int *ptr, int arrsize) // *ptr -> b[]
{
    int total = 0;

    for(int i = 0; i < arrsize ; i++)
    {
        total = total + *(ptr + i); // *(ptr + i) -> b[i]
    }
    return

}

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";
    int a[] = {4, 5, 9, 3, 1};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Size of arr " << sizeof(a) << endl;
    cout << "Size of arr[0] " << sizeof(a[0]) << endl;
    int total = sum1(a, n);
    cout << "Total Sum 1 -> " << total << endl;

    // Now we can see some error, it is not giving the sum of all elements. It gives only one or two elements. Because when we pass an array to any function it doesn't copy the whole array like before. it only pass the memory address of first element of that array.
    // Lets try with another like the same way

    int b[] = {1, 2, 3, 4, 5, 6};
    int arrsize = sizeof(b) / sizeof(b[0]);
    int total2 = sum2(b,arrsize);
    cout << "Sum 2 - "<< total2 << endl;


    return 0;
}