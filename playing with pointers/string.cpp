#include <iostream>
#include <cstring>

using namespace std;

class strcount
{
    private:
        int count;
        char* str;
        friend class String;
        strcount(char* s)
        {
            str = new char(strlen(s)+1);
            strcpy(str,s);
            count =1;
        }
        ~strcount()
        {
            delete[] str;
        }
};

class String
{
    private:
        strcount* psc;
    public:
        String()
        {
            psc = new strcount("NULL");
        }
        String(char* s)
        {
            psc = new strcount(s);
        }
        // String(String& s)
        // {
        //     cout<<"\nCopy constructor";
        //     psc = s.psc;
        //     (psc->count)++;
        // }
        ~String()
        {
            if(psc->count == 1)
                delete psc;
            else
                (psc->count)--;
        }
        void display()
        {
            cout<<psc->str;
            cout<<"(Addr : "<<psc<<")";
        }
        String& operator = (String& s)
        {
            cout<<"\nAssignment operator invoked\n";
            if(psc->count ==1)
                delete psc;
            else   
                (psc->count)--;
            psc = s.psc;
            (psc->count)++;
            return *this;
        }
};

int main()
{
    String s3 = "Where the fox preaches over the Night";
    cout<<"\nS3 : ";s3.display();

    String s1,s2;
    s1 = s2 =s3;
    cout<<"\ns1 : ";s1.display();
    cout<<"\nS2 : ";s2.display();

    return 0;
}
