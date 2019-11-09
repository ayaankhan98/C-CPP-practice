#include <iostream>
#include <string.h>

using namespace std;

class String
{
private:
    char* str;
public:
    String(char* s)
    {
        int len = strlen(s);
        str = new char[len+1];
        strcpy(str,s);
    }
    void display()
    {
        cout<<endl<<"Str : "<<str;
    }
    ~String()
    {
        cout<<endl<<"Deleting Allocated Memory";
        delete[] str;
    }
};

int main()
{
    String st1("If You Find Ideals Are Actually the non-Ideals");
    st1.display();
    return 1;
}
