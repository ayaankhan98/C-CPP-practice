#include <iostream>
#include <string>

using namespace std;

int main()
{
    string aName("George");
    string username;
    cout<<endl<<"Enter Username : ";
    cin>>username;

    if(aName == username)
        cout<<endl<<"Match !";
    else if(aName > username)
        cout<<endl<<"your name before George";
    else
        cout<<endl<<"your name after George";

    int n = username.compare(0,2,aName,0,2);
    if(n == 0)
        cout<<endl<<"First two character matched !";
    else if(n>0)
        cout<<endl<<"comes after";
    else
        cout<<endl<<"comes before";
    cout<<aName.substr(0,2);
    return 0;
}
