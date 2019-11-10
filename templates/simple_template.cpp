#include <iostream>

using namespace std;

template <class T>
T abs(T n)
{
    return (n<0)?-n:n;
}

int main()
{
   cout<<"abs(5) : "<<abs(5)<<endl;
   cout<<"abs(-8.9) : "<<abs(-8.9)<<endl;
   cout<<"abs(99.56) : "<<abs(99.56)<<endl;
   cout<<"abs(-5) : "<<abs(-5)<<endl;

   return 0;
}