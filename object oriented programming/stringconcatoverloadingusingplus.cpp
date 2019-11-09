#include <iostream>
#include <string.h>
#include <string>

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
        cin.getline(str,sz);
    }
    void display()
    {
        cout<<endl<<str;
    }
    String operator + (String) const;
};

String String::operator+(String s) const
{
    String temp;
    if(strlen(s.str)+strlen(str)<sz)
    {
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
    }
    else
        cout<<endl<<"String Overflow !"<<endl;
    return temp;
}

int main()
{
    String s1,s2,s3;
    cout<<endl<<"=======String 1========"<<endl;
    s1.get_str();
    cout<<endl<<"=======String 2========"<<endl;
    s2.get_str();
    s3 = s1 + s2;
    s3.display();
    return 0;
}
