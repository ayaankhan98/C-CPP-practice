#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int source[] = {3,5,3,67,43,11,45,3,54};
    int pattern[] = {67,43,11};

    int* ptr;
    ptr = search(source,source+9,pattern,pattern+3);
    if(ptr == source+9)
        cout<<"\nPattern Not Found\n";
    else
        cout<<"\nPattern Found at : "<<ptr-source+1<<endl;

    return 0;

}
