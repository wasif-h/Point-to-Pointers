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

    //type casting to character data type

    char *ptr0 = (char*)ptr;

    cout << "a in char" << endl;
    // cout cannot print char* directly as an address since it interprets it as a string
    printf("%d\n",ptr0);
    printf("%d\n",*ptr0);
    printf("%d\n",*(ptr0+1));
    



    return 0;
}