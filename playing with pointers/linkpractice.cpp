#include <iostream>

using namespace std;

struct node
{
    int data;
    node* next;
};

class linklist
{
    private:
        node* first;
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
    node* new_node = new node;
    new_node->data = d;
    new_node->next = first;
    first = new_node;
}

void linklist::display()
{
    node* current = first;
    while(current!=NULL)
    {
        cout<<current->data<<"  ";
        current = current->next;
    }
    cout<<endl;
}

int main()
{
    linklist li;
    li.additem(22);
    li.additem(233);
    li.additem(343);

    li.display();
    return 0;
}