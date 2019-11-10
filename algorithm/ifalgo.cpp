#include <iostream>
#include <algorithm>

using namespace std;


    bool isdavid(string s)
    {
        return (s == "David")?true:false;
    }

int main()
{
    string names[] = {"Bob","Penny","David","Escilate","Alice"};
    string* ptr;

    ptr = find_if(names,names+5,isdavid);

    cout<<"\nElement at : "<<ptr-names<<endl;

    return 0;

}