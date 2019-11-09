#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("Hello This is Robert lafore object oriented prgramming in C++");
    int n;
// ALL THESE FUNCTIONS RETURN -1 if the supplied parameter is not found  0!!!
    n = s1.find("This");
    cout<<n;

    n = s1.find_first_of("isrl");
    cout<<endl<<n;

    n = s1.find_first_not_of("aeiouAEIOU");
    cout<<endl<<n;

}
