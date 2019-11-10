#include <iostream>

using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        class inchesex
        {};
        Distance(): feet(0), inches(0.0)
        {}
        Distance(int f , float i)
        {
            if(i>12.0)
                throw inchesex();
            else
            {
                feet = f;
                inches = i;
            }
        }
        void getdist()
        {
            cout<<"Enter Feet : ";
            cin>>feet;
            cout<<"Enter Inches : ";
            cin>>inches;
            if(inches > 12.0)
                throw inchesex();
        }
        void showdist()
        {
            cout<<endl<<feet<<"-"<<inches<<endl;
        }
};

int main()
{
    try
    {
       Distance d1;
       d1.getdist();
       d1.showdist();
    }
    catch(Distance::inchesex)
    {
        cout<<"\nInches Must be less than 12.0\n";
    }
    return 0;
}