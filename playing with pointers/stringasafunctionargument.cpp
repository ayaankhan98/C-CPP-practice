#include <iostream>

using namespace std;

void disptr(char*);

int main()
{
    char str[] = "Idle people have the least leisure";
    disptr(str);
    return 0;
}

void disptr(char* ptr)
{
    while(*ptr)
    {
        cout<<*ptr++;
    }
}
