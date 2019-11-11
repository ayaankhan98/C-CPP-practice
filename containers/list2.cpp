#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> list1,list2;

    int arr1[] = {2,3,4,5,6,7,8};
    int arr2[] = {2,3,6,8,3,99,56,75};

    for(int i=0;i<7;i++)
        list1.push_front(arr1[i]);
    
    for(int i=0 ;i<8;i++)
        list2.push_back(arr2[i]);

    list1.reverse();
    list1.merge(list2);
    list1.unique();

    int size = list1.size();

    while(!list1.empty())
    {
        cout<<list1.front()<<"  ";
        list1.pop_front();
    }

    cout<<endl;

    return 0;

}