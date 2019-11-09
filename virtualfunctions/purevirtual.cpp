#include <iostream>

using namespace std;

class base
{
    public:
        virtual void show() = 0;
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

    base* ptrarr[2];

    ptrarr[0] = &dv1;
    ptrarr[1] = &dv2;

    ptrarr[0]->show();
    ptrarr[1]->show();

    return 0;
}