#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance():feet(0), inches(0.0)
    {}
    Distance(int f, float i): feet(f), inches(i)
    {}
    void get_dist()
    {
        cout<<endl<<"====================";
        cout<<endl<<"Feet : ";
        cin>>feet;
        cout<<endl<<"Inches : ";
        cin>>inches;
    }
    void show_dist()
    {
        cout<<endl<<"====================";
        cout<<endl<<feet<<"-"<<inches;
    }
    Distance operator += (Distance);
};

Distance Distance::operator += (Distance d2)
{
    feet +=d2.feet;
    inches +=d2.inches;
    if(inches>12)
    {
        inches -=12.0;
        feet++;
    }
}

int main()
{
    Distance dist1, dist2;
    dist1.get_dist();
    dist2.get_dist();
    dist1 += dist2;
    cout<<"Total Distance : ";
    dist1.show_dist();
    return 0;
}
