#include <iostream>

using namespace std;

class beta;    // class decleration without defenition

class alpha
{
    private:
        int data;
    public:
        alpha(): data(3)
        {}
        friend int friend_func(alpha,beta);
};

class beta
{
    private:
        int data;
    public:
    beta(): data(7)
    {}
        friend int friend_func(alpha,beta);
};

int friend_func(alpha a, beta b)
{
    return (a.data + b.data);
}

int main()
{
    alpha aa;
    beta bb;
    cout<<friend_func(aa,bb);
    return 0;
}