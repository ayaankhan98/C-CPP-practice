#include <iostream>

using namespace std;

class base
{
    public:
        void hello()
        {
            cout<<"\nHello from base class\n";
        }
        virtual ~base()   // if you write ~base() only then only base class destructor will be called
                        // and derived class destructor will not be called
                        // therefore memory of only base class will be released 
                        // and memory of derived cass will not be released

                        // Therefore always make the base class destructor virual
        {
            cout<<"\nDestructir of Base class \n";
        }
};

class derived1 : public base
{
    public:
        void hello()
        {
                cout<<"\nhello from Derived class 1\n";
        }
        ~derived1()
        {
            cout<<"\nDestructor of derived class 1\n";
        }
};

class derived2: public base
{
    public:
        void hello()
        {
            cout<<"\nhello from Derived Class 2\n";
        }
        ~derived2()
        {
            cout<<"\nDestructor of derived class 2";
        }
};

int main()
{
    base* baseptr;

    
    baseptr = new derived1;

    delete baseptr;



}