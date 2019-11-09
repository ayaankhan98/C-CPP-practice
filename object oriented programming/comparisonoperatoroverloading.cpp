#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0.0)   // NO argument constructor
    {}
    Distance(int f, float i): feet(f), inches(i)  // two argument constructor
    {}
    void get_dist()
    {
        cout<<endl<<"================";
        cout<<endl<<"Enter Feet : ";
        cin>>feet;
        cout<<endl<<"Enter Inches : ";
        cin>>inches;
    }
    bool operator > (Distance) const;
};

bool Distance::operator > (Distance d2) const
{
    float f1 = feet + inches/12;
    float f2 = d2.feet + d2.inches/12;

    return (f1>f2)?true:false;
}

int main()
{
    Distance dist1, dist2;
    dist1.get_dist();
    dist2.get_dist();
    if(dist1 > dist2)
        cout<<"Distance 1 is greater than 2";
    else
        cout<<"Distance 2 is greater than 1";
}
