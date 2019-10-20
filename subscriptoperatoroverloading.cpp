#include <iostream>
#include <cstdlib>

using namespace std;

const int LIMIT = 10;

class safearay
{
private:
    int arr[LIMIT];
public:
    int& operator [](int n)
    {
        if(n<0 || n>LIMIT)
        {
            cout<<"Index Out Of Bound Exception";
            exit(1);
        }
        return arr[n];
    }
};

int main()
{
    safearay sa;
    int j,get;
    for(j=0;j<LIMIT;j++)
    {
        cin>>get;
        sa[j] = get;
    }
    for(j=0;j<LIMIT;j++)
    {
        cout<<endl<<"Element is : "<<sa[j];
    }
    return 0;
}
