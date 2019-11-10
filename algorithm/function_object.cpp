#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    int src1 [] ={2,5,3,7,34,45,343,878,343,232,2,34,5};
    sort(src1,src1+13,greater<int>());

    for(int i = 0;i<13;i++)
        cout<<src1[i]<<"  ";
    cout<<endl;
    return 0;
}