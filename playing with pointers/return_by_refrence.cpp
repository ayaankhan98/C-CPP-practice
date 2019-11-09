#include <iostream>

using namespace std;

class alpha
{
    private:
        int data;
    public: 
        alpha(): data(0)
        {}
        alpha(int d): data(d)
        {}
        alpha& operator = (alpha& a)
        {
            data = a.data;
            cout<<"\nOverloaded = invoked\n";

            return *this;
        }
        void display()
        {
            cout<<data;
        }
};

int main()
{
        alpha a1(37);
        alpha a2,a3;

        a3 = a2 = a1;

        cout<<"\na2 : ";a2.display();
        cout<<"\na3 : ";a3.display();

        return 0;
}