#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance():feet(0), inches(0.0)   //no argument constructor
    {}
    Distance(int f, float i): feet(f),inches(i)   // two argument constructor
    {}
    void get_dist()
    {
        cout<<endl<<"Enter Feet : ";
        cin>>feet;
        cout<<endl<<"Enter Inches : ";
        cin>>inches;
    }
    void show_dist() const
    {
        cout<<endl<<"Distance : "<<feet<<"-"<<inches;
    }
    Distance operator + (Distance) const;  // operator overloading function declaration
};

Distance Distance::operator + (Distance d2) const  // operator overloading function definition
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if(i>12.0)
    {
        f++;
        i-=12.0;
    }
    return Distance(f,i);
}

int main()
{
    Distance dist1, dist2, dist3;
    cout<<endl<<"======Distance 1=======";
    dist1.get_dist();
    cout<<endl<<"======Distance 2=======";
    dist2.get_dist();
    dist3 = dist1 + dist2;

    cout<<endl<<"======Distance 3=======";
    dist3.show_dist();
    return 0;
}
