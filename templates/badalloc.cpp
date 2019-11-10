#include <iostream>

using namespace std;

int main()
{
    char* name;
    try
    {
        name = new char[50];
    }
    catch(bad_alloc)
    {
        cout<<"\nbad_alloc Exception\ncannot  allocate memory\n";
    }
    delete[] name;
    cout<<"\nMemory allocated Sucessful\n";

    return 0;
    

}