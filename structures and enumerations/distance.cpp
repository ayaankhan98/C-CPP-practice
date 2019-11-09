#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    float inches;
};

int main()
{
    Distance d1;
    Distance d2 = {11,4.5};
    cout<<"Enter Feet : ";
    cin>>d1.feet;
    cout<<"Enter Inches : ";
    cin>>d1.inches;
    Distance d3;
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    if(d3.inches>=12.0)
    {
        d3.inches-=12.0;
        d3.feet++;
    }
    cout<<d1.feet<<"+"<<d2.feet<<"="<<d3.feet<<endl;
    cout<<d1.inches<<"+"<<d2.inches<<"="<<d3.inches;
}
