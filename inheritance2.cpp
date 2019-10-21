// Implementing stack at basic level

#include <iostream>
#include <cstdlib>

using namespace std;

const int SIZE = 10;

class stack
{
protected:
    int top;
    int st[SIZE];
public:
    stack()
    {
        top =-1;
    }
    void push(int var)
    {
        st[++top] = var;
    }
    int pop()
    {
        return st[top--];
    }
    void show_stack()
    {
            cout<<endl<<"stack at "<<top<<" contains "<<st[top];
    }
};

class stack2:public stack
{
public:
    void push(int var)
    {
        if(top>=SIZE-1)
        {
            cout<<endl<<"Error : Stack Overflow !";
            exit(1);
        }
        stack::push(var);
    }
    int pop()
    {
        if(top<0)
        {
            cout<<endl<<"Error : Stack Underflow !";
            exit(1);
        }
        return stack::pop();
    }
};

int main()
{
    stack2 s1;
    s1.push(11);
    s1.show_stack();
    s1.push(12);
    s1.show_stack();
    s1.push(26);
    s1.show_stack();
    s1.push(22);
    s1.show_stack();
    s1.pop();
    s1.show_stack();
    s1.pop();
    s1.show_stack();
    return 0;
}
