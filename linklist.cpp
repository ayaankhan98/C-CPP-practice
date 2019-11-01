#include <iostream>

using namespace std;

struct link
{
    int data;
    link* next;
};

class linklist
{
private:
    link* first;
public:
    linklist()
    {
        first = NULL;
    }
    void additem(int);
    void display();
};

void linklist::additem(int d)
{
    link* newlink;
    newlink = new link;
    newlink->data = d;
    newlink->next = first;
    first = newlink;
}

void linklist::display()
{
    link* current = first;
    while(current!=NULL)
    {
        cout<<current->data<<"  ";
        current = current->next;
    }
}

int main()
{
    linklist li;
    li.additem(22);
    li.additem(23);
    li.additem(24);
    li.additem(25);
    li.additem(26);
    li.additem(27);
    li.additem(28);

    li.display();

    return 0;
}
