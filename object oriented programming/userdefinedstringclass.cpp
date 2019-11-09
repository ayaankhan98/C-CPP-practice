#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 80;

class String{
private:
    char str[SIZE];

public:
    String(){
        str[0]='\0';
    }
    String(char s[])
    {
        strcpy(str,s);
    }
    void display()
    {
        cout<<str;
    }
    void concat(String s2)
    {
        if((strlen(str)+strlen(s2.str))<SIZE)
            strcat(str,s2.str);
        else
            cout<<"String too large ! ";
    }
};

int main()
{
    String s1("Merry Christmas !");
    String s2 = "Welcome December !";
    String s3;

    cout<<endl<<"s1 : ";s1.display();
    cout<<endl<<"s2 : ";s2.display();
    cout<<endl<<"s3 : ";s3.display();

    s3 = s1;
    cout<<endl<<"s3 : ";s3.display();

    s3.concat(s2);
    cout<<endl<<"s3 : ";s3.display();

    return 0;
}
