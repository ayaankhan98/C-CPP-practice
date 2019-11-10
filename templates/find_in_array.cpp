#include <iostream>

using namespace std;

template <class T>
int find(T* arr, T n, int size)
{
    for(int i=0;i<size;i++)
        if(*(arr+i) == n)
            return i;
    return -1;
}

int main()
{
    int arr[] = {1,5,3,8,55,76,34,45};
    cout<<"Find at : "<<find(arr,55,8)+1<<endl;
    return 0;
}