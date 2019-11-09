#include <iostream>

using namespace std;

class person
{
private:
    char name[50];
public:
    void get_name()
    {
        cout<<endl<<"Name : ";
        cin>>name;
    }
    void show_name()
    {
        cout<<name<<endl;
    }
};

int main()
{
    person* person_info[100];
    int n=0;
    char ch;
    do
    {
        person_info[n] = new person;
        person_info[n]->get_name();
        cout<<"Add More (Y/N) : ";
        cin>>ch;
        n++;
    }
    while (ch=='y' || ch=='Y');

    for(;n!=0;n--)
    {
        cout<<n<<" : ";
        person_info[n]->show_name();
    }
    return 0;
}
