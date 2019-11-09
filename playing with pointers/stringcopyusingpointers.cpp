#include <iostream>

using namespace std;

void cpystr(char*,const char*);

int main()
{
    char* str1 = "Hello, World!";
    char str2[80];
    cpystr(str2,str1);
    cout<<str2;
}

void cpystr(char* st2 ,const char* st1)
{
    while(*st1)
    {
        *st2++ = *st1++;
    }
    *st2= '\0';
}
