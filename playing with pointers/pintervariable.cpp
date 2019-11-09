#include <iostream>

using namespace std;

int main()
{
    int var1 = 11;
    int var2 = 22;

    cout<<endl<<"Address of var1 : "<<&var1;
    cout<<endl<<"Address of var2 : "<<&var2;

    int* ptr;

    ptr = &var1;
    cout<<endl<<"Pointer to var1 : "<<ptr;

    ptr = &var2;
    cout<<endl<<"Pointer to var2 : "<<ptr;

    return 0;
}
