#include <iostream>

using namespace std;

void bsort(int*, int);
void order(int*, int*);

int main()
{
    int n,i;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter array elements : ";
    for(i=0;i<n;i++)
        cin>>arr[i];

    bsort(arr,n);

    for(i=0;i<n;i++)
        cout<<arr[i]<<"  ";
}

void bsort(int* ptr, int s)
{
    int i,j;
    for(i=0;i<s-1;i++)
        for(j=i+1;j<s;j++)
            order(ptr+i,ptr+j);
}

void order(int* num1 , int* num2)
{
    if(*num1 > *num2)
    {
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}
