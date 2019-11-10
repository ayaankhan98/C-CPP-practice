#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[]={34,5,3,6,23,656,34,6534,63,355};
    sort(arr,arr+10);
    for(int i=0;i<10;i++)
        cout<<arr[i]<<"   ";
    cout<<endl;
    return 0; 
}
