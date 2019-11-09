#include <iostream>

using namespace std;

void swap(int&,int&);

int main()
{
    int a= 11;
    int b = 4;

    cout<<endl<<"Before swapping\n";
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    swap(a,b);
    cout<<"\nAfter Swapping \n";
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    return 0;
}

void swap(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}