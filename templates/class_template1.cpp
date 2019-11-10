#include <iostream>

using namespace std;

const int MAX = 100;

template <class T>
class stack
{
    private:
        T st[MAX];
        int top;
    public:
        stack()
        {
            top = -1;
        }
        void push(T ele)
        {
            st[++top] = ele;
        }
        T pop()
        {
            return st[top--];
        }
};
/*
template <class Type>
stack<Type>::stack()     // way to declare function outside the class in case of templates
{

}

template <class Type>
void stack<Type>::push(Type var) // way to declare function outside of class in case of templates
{

}

*/


int main()
{
    stack<int> stack_int;
    stack_int.push(22);
    stack_int.push(33);
    stack_int.push(55);
    cout<<"popped : "<<stack_int.pop();
    cout<<"\npopped : "<<stack_int.pop();

    stack<float> stack_float;
    stack_float.push(22.3);
    stack_float.push(3.14);
    stack_float.push(44.34);
    cout<<"\nPopped : "<<stack_float.pop();
    cout<<endl;

    return 0;
}
