// Author : Wasif Hossain <https://www.linkedin.com/in/wasif-h>
// Topic  : pointer type
#include <bits/stdc++.h>
using namespace std;

// <<<---------  main function   --------->>>
int main()
{

    cout << "---- Code with Wasif ----\n\n";

    int a = 1024;
    int *ptr = &a;
    cout << "a" << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << ptr + 1 << endl;
    cout << *(ptr + 1) << endl;

    // type casting to character data type

    char *ptr0 = (char *)ptr;

    cout << "a in char" << endl;
    // cout cannot print char* directly as an address since it interprets it as a string
    printf("%d\n", ptr0);
    printf("%d\n", *ptr0); // show the value of first byte - because char holds 1 byte only

    printf("%d\n", *(ptr0 + 1)); // show the value of second byte - which was allocated for ptr not ptr0

    // void pointer ------
    // by using this we dont need to typecast. But it has limitations. We can only use it to store address. We can not dereference or  use ptr + 1

    void *ptr_v = ptr;
    cout << ptr_v;

    return 0;
}