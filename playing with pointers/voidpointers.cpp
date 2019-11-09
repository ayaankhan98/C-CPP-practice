#include <iostream>

using namespace std;

int main()
{
    int intvar = 11;
    float flovar;

    int* ptrint;
    float* ptrflo;
    void* ptrvoid;

    ptrint = &intvar;
    cout<<endl<<*ptrint;
    cout<<endl<<ptrint;
    ptrflo = &flovar;
    ptrflo = reinterpret_cast<float*>(intvar);
    ptrvoid = &intvar;
    cout<<endl<<ptrvoid;
    ptrvoid = &flovar;

    return 0;
}
