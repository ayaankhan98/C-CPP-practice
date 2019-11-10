#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int src1 []= {3,4,3,4,5};
    int src2 []= {7,8,56,454,454};
    int dest[10];

    merge(src1,src1+5,src2,src2+5,dest);

    for(int i=0;i<10;i++)
        cout<<dest[i]<<"  ";
    cout<<endl;

    return 0;
}