#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0.00)
    {}
    Distance(int f, float i): feet(f), inches(i)
    {}
    void get_dist()
    {
        cout<<"Enter Feet : ";
        cin>>feet;
        cout<<"Enter Inches : ";
        cin>>inches;
    }
    void show_dist()
    {
        cout<<endl<<feet<<"-"<<inches;
    }
    operator float()
    {
        float fracfeet = feet + inches/12;
        return fracfeet/0.3048;
    }
    Distance(float meters)
    {
        float dist = meters*0.3048;
        feet = static_cast<int>(dist);
        inches = 12*(dist - feet);
    }
};

int main()
{
    Distance dist1;
    float meters;

    dist1.get_dist();
    dist1.show_dist();
    meters = static_cast<float>(dist1);
    cout<<endl<<"Distance in Meters : "<<meters;

    Distance dist2(meters);
    cout<<endl<<"Distance is feet : ";
    dist2.show_dist();

    return 0;
}
