#include <iostream>

using namespace std;

const int MAX = 3;

class stack
{
    private:
        int st[MAX];
        int top;
    public:
        class Range
        {};
        stack(): top(-1)
        {}
        void push(int var)
        {
           if(top >= MAX-1)
                throw Range();
            st[++top] = var; 
        }
        int pop()
        {
            if(top<0)
                throw Range();
            return st[top--];
        }
};

int main()
{
    try
    {
        stack s1;
        s1.push(22);
        s1.push(25);
        s1.push(30);
   //     s1.push(300);
        s1.pop();
        s1.pop();
        s1.pop();
        s1.pop();
    }
    catch(stack::Range)
    {
        cout<<"\nException : Overflow or Underflow .. !\n";
    }

    return 0;
}