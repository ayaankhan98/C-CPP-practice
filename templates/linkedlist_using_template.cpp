#include <iostream>

using namespace std;

template <class T>
struct link
{
    T data;
    link* next;
};

template <class T>
class linklist
{
    private:
        link<T>* first;
    public: 
        linklist()
        {
            first = NULL;
        }
        void additem(T d);
        void display();
};

template <class T>
void linklist<T>::additem(T d)
{
    link<T>* newlink = new link<T>;
    newlink->data = d;
    newlink->next = first;
    first = newlink;
}

template <class T>
void linklist<T>::display()
{
    link<T>* current = first;
    while(current != NULL)
    {
        cout<<endl<<current->data;
        current = current->next;
    }
}

int main()
{
    linklist<double> ld;
    ld.additem(151.5);
    ld.additem(1.5);
    ld.additem(1589182.5);
    ld.additem(153841.5);
    ld.display();

    linklist<char> lc;
    lc.additem('c');
    lc.additem('x');    
    lc.additem('a');
    lc.additem('z');
    lc.display();

    return 0;
}