#include <iostream>
#include <string>

using namespace std;

int main()
{
    string full_name, nickname, address;
    cout<<"Enter Your Full Name : ";
    getline(cin,full_name);
    cout<<"Enter Your Nickname : ";
    cin>>nickname;
    cout<<"Enter Your Address : ";
    getline(cin,address,'$');

    cout<<"Name : "<<full_name<<endl<<"Nickname : "<<nickname<<endl<<"Address : "<<address;
    return 0;
}
