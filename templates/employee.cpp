#include <iostream>

using namespace std;

const int LEN = 80;

class employee
{
    private:
        char name[LEN];
        unsigned int number;
    public:
      friend istream& operator >> (istream& s, employee& e);
      friend ostream& operator << (ostream& s, employee& e);
};

istream& operator >> (istream& s, employee& e)
{
    cout<<"\nName : ";
    cin>>e.name;
    cout<<"\nNumber :";
    cin>>e.number;
    return s;
}

ostream& operator <<(ostream& s, employee& e)
{
    cout<<"\nName : "<<e.name<<endl<<"Number : "<<e.number;
    return s;
}

template <class Type>
struct link
{
    Type data;
    link* next;
};

template <class Type>
class linklist
{
    private:
        link<Type>* first;
    public:
        linklist()
        {
            first = NULL;
        }
        void additem(Type var)
        {
            link<Type>* newlink = new link<Type>;
            newlink->data = var;
            newlink->next = first;
            first = newlink;
        }
        void display()
        {
            link<Type>* current = first;
            while(current != NULL)
            {
                cout<<endl<<current->data;
                current = current->next;
            }
        }
};

int main()
{
    employee emptemp;
    linklist<employee> emp;
    char ans;
    do
    {
        cin>>emptemp;
        emp.additem(emptemp);
        cout<<"\nAdd another (Y/N) : ";
        cin>>ans;
    } while (ans == 'Y' || ans == 'y');
    emp.display();
    cout<<endl;
    return 0;
}