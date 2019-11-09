#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance(): feet(0),inches(0.0)
    {}
    Distance(int ft,float in): feet(ft),inches(in)
    {}
    void getdist()
    {
        cout<<"Enter feet : ";
        cin>>feet;
        cout<<endl<<"Enter Inches : ";
        cin>>inches;
    }
    void showdist()
    {
        cout<<"\nFeet : "<<feet<<"-Inches"<<inches<<endl;
    }
    void add_dist(Distance ,  Distance);
};

void Distance::add_dist(Distance d2, Distance d3)
{
    inches = d2.inches + d3.inches;
    feet = 0;
    if(inches>=12.0)
    {
        inches -=12.0;
        feet++;
    }
    feet+= d2.feet + d3.feet;
}

int main()
{
    Distance dist1, dist3;
    Distance dist2(11,6.25);
    dist1.getdist();
    dist3.add_dist(dist1 , dist2);
    cout<<"Distance 1 : ";dist1.showdist();
    cout<<"Distance 2 : ";dist2.showdist();
    cout<<"Distance 3 : ";dist3.showdist();
    return 0;
}
