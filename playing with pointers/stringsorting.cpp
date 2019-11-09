#include <iostream>
//#include <string>

using namespace std;

class Person
{
    private:
        string name;
    public:
        string getname()
        {
            return name;
        }
        void setname()
        {
            cout<<"Enter Name : ";
            cin>>name;
        }
        void printname()
        {
            cout<<endl<<name;
        }
};

int main()
{
    void bsort(Person** , int);
    Person* perptr[100];
    int n=0;
    char choice;
    do
    {
        perptr[n] = new Person;
        perptr[n]->setname();
        n++;
        cout<<"Do you want to enter more (Y/N) : ";
        cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');

    cout<<endl<<endl<<"Usorted Names : "<<endl;
    for(int i=0;i<n;i++)
        perptr[i]->printname();
    //cout<<endl;

    bsort(perptr , n);

    cout<<endl<<endl<<"Sorted Names : "<<endl;
    for(int i=0;i<n;i++)
        perptr[i]->printname();
    cout<<endl;

}

void bsort(Person** ptr, int n)
{
 void order(Person** , Person**);
    int i,j;
    for(i=0 ; i<n-1 ; i++)
        for(j=i+1 ; j<n ; j++)
            order(ptr+i , ptr+j);
}

void order(Person** ptr1, Person** ptr2)
{
    if ( (*ptr1)->getname() > (*ptr2)->getname() )
    {
        Person* temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}