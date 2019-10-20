#include <iostream>
#include <string.h>

using namespace std;

class String
{
private:
    static const int sz = 100;
    char str[sz];
public:
    String()
    {
        strcpy(str,"");
    }
    String(char s[])
    {
        strcpy(str,s);
    }
    void get_str()
    {
        cout<<endl<<"Enter String : ";
        cin.getline(str,sz);
    }
    bool operator == (String s) const;
};

bool String::operator == (String s) const
{
    return (strcmp(str,s.str)==0)?true:false;
}

int main()
{
    String str1, str2;
    str1.get_str();
    str2.get_str();
    if(str1 == str2)
        cout<<endl<<"String 1 is EQUAL to String 2";
    else
        cout<<endl<<"Strings are not EQUAL !! ";
}
