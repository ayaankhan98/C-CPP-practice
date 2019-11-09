#include <iostream>

using namespace std;

int main()
{
    int var1 = 11;
    int var2 = 22;

    cout<<endl<<"var1 : "<<var1;
    cout<<endl<<"var2 : "<<var2;

    int* ptr;
    ptr = &var1;

    (*ptr)++;
    (*ptr)-=-12;
    cout<<endl<<"Adding 13 to var1 using pointer variable : "<<var1;
    (*ptr)-=-1;
    cout<<endl<<"Adding 1 to the var1 using pointer variable : "<<*ptr;

    ptr = &var2;

    *ptr+=-2;
    cout<<endl<<"Reduced var2 by 2 using pointer variable : "<<var2;

    return 0;
}
