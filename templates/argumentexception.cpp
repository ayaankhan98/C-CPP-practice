#include <iostream>

using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        class inchesex
        {
            public:
                string origin;
                float val;
                inchesex(string orx , float fval)
                {
                    origin = orx;
                    val = fval;
                }

        };
        Distance(): feet(0), inches(0.0)
        {}
        Distance(int f , float i)
        {
            if(i>12.0)
                throw inchesex("2 argument constructor",i);
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
                throw inchesex("getdist() function",inches);
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
  //     Distance d2(12,45.3);
    }
    catch(Distance::inchesex ix)
    {
        cout<<endl<<ix.origin<<"  "<<ix.val;
    }
    return 0;
}