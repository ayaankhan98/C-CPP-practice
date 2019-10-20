#include <iostream>
#include <cstdlib>

using namespace std;

static const int LIMIT = 10;

class safearay
{
private:
    int arr[LIMIT];
public:
    int& access(int n)
    {
        if(n<0 || n>LIMIT)
        {
            cout<<"Index Out of Bound Exception ! ";
            exit(1);
        }
        return arr[n];
    }

};

int main()
{
    safearay sa1;
    int j,get;
    for(j=0;j<LIMIT;j++)
    {
        cin>>get;
        sa1.access(j) =get ;   // Array assignment or Array Input
    }

    for(j=0;j<LIMIT;j++)
    {
        int temp = sa1.access(j);
        cout<<endl<<"Element : "<<temp;
    }
    return 0;

}
