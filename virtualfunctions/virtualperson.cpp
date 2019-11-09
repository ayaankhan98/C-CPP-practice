#include <iostream>

using namespace std;

class person
{

    protected:
        char name[40];
    public:
        void getname()
        {
            cout<<"Name : ";
            cin>>name;
        }
        void showname()
        {
            cout<"\n******___OUTSTANDING STARS____*****\n";
            cout<<endl<<name<<endl;
        }
        virtual void getdata() = 0;
        virtual bool isoutstanding() = 0;
};

class student : public person
{
    private:
        float cpi;
    public:
        void getdata()
        {
            person::getname();
            cout<<"CPI : ";
            cin>>cpi;
        }
        bool isoutstanding()
        {
            return (cpi >= 8.6) ? true : false;
        }
};

class professor : public person
{
    private:
        int numpub;
    public:
        void getdata()
        {
            person::getname();
            cout<<"Number of Publications : ";
            cin>>numpub;
        }
        bool isoutstanding()
        {
            return (numpub >= 80)?true:false;
        }
};

int main()
{
    person* perptr[100];
    int n=0;
    char choice;
    do
    {
        cout<<"Add a Student or Professor (S/P) : ";
        cin>>choice;

        if(choice == 'S' || choice == 's')
            perptr[n] = new student;
        else
            perptr[n] = new professor;
        perptr[n++]->getdata();
        cout<<"Enter another (Y/N) : ";
        cin>>choice;
    }while(choice == 'Y' || choice =='y');

    for(int j=0;j<n;j++)
        if(perptr[j]->isoutstanding())
            perptr[j]->showname();
    
    return 0;
}