#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {2,3,43,562,454,34};
    vector<int> v1(arr,arr+6);
    vector<int> v2(6);

    v1.swap(v2);

    while(!v2.empty())
    {
        cout<<v2.back()<<"  ";
        v2.pop_back();
    }

    cout<<endl;

    return 0;
}