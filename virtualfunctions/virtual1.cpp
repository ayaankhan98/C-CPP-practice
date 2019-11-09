#include <iostream>

using namespace std;

class base
{
    public:
        virtual void show()
        {
            cout<<"Base";
        }
};

class derived1:public base
{
    public:
        void show()
        {
            cout<<"Derived 1";
        }
};

class derived2 : public base
{
    public:
        void show()
        {
            cout<<"Derived 2";
        }
};

int main()
{
    derived1 dv1;
    derived2 dv2;

    base* ptr;

    ptr = &dv1;
    ptr->show();

    ptr = &dv2;
    ptr->show();

    return 0;
}