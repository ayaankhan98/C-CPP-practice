#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> ilist;

    ilist.push_front(22);
    ilist.push_front(44);
    ilist.push_front(55);
    ilist.push_front(66);

    int size = ilist.size();

    for(int i=0;i<size;i++)
    {
        cout<<ilist.front()<<"   ";
        ilist.pop_front();
    }
    cout<<"\n";
    return 0;
}