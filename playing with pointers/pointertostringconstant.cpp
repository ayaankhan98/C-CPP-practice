#include <iostream>

using namespace std;

int main()
{
    char str1[] = "Defined as an Array !";
    char* str2 = "Defined as a Pointer !";

    cout<<"Str 1 : "<<str1;
    cout<<endl<<"Str 2 : "<<str2;

    str2++;
    cout<<endl<<"Pointer Modification to str 2 : "<<str2;

    return 0;
}
