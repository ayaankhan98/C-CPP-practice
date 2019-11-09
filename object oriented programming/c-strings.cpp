#include <iostream>

using namespace std;

int main()
{
    const int MAX = 1000;
    char str[MAX];
    cout<<"Enter String : ";
    cin.get(str,MAX,'$');
    cout<<"\nYour String : "<<str<<endl;
    return 0;
}
