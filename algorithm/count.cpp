#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {2,4,5,7,3,4,5,2,6,2,7,4,52,3,3,2,2};
    int n = count(arr,arr+17,2);
    cout<<"No of 2's : "<<n<<endl;
    return 0;
}