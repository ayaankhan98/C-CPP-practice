/* Implementing find algorithm of STL */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr [] = {2,5,7,33,55,76,87,109,34};
    int* ptr;
    ptr = find(arr, arr+9,55);
    cout<<"\nElement position : "<<ptr-arr+1<<endl;
    return 0;
}