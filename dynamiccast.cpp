#include <iostream>
#include <typeinfo>    //for typeid

using namespace std;

class base
{
    protected:
        int bint;
    public:
        base()
        {
            bint =0;
        }
        base(int b): bint(b)
        {}
    virtual void x()
    {}
        void print()
        {
            cout<<"\nbint ="<<bint<<endl;
        }
};

class derived1 : public base
{
    protected:   
        int dint;
    public:
    derived1()
    {
        dint = 0;
        bint = 0;
    }
    derived1(int d, int b)
    {
        dint = d;
        bint = b;
    }
        void print()
        {
            cout<<"\ndint = "<<dint<<"  bint = "<<bint<<endl;
        }
};

int main()
{
    base* bptr;
    derived1* dptr;

    derived1 dv1(5,10);
    base b(7);

    bptr = &b;
    dptr = &dv1;

    dptr->print();
    bptr->print();

    cout<<typeid(*bptr).name()<<endl;
    cout<<typeid(*dptr).name()<<endl;

    bptr = dynamic_cast<base*>(dptr);
    bptr->print();

    dptr = dynamic_cast<derived1*>(bptr);
    dptr->print();

    cout<<typeid(*bptr).name()<<endl;
    cout<<typeid(*dptr).name()<<endl;

    return 0;
}