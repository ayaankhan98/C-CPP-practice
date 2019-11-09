#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0.0)
    {}
    Distance(int f, float i): feet(f), inches(i)
    {}
    void get_dist()
    {
        cout<<endl<<"Enter Feet : ";
        cin>>feet;
        cout<<endl<<"Enter Inches : ";
        cin>>inches;
    }
    void show_dist()
    {
        cout<<endl<<"Distance : "<<feet<<"-"<<inches;
    }
};

int main()
{
//----------Simple Use---------------------//
    Distance dist1;
    dist1.get_dist();
    dist1.show_dist();

//-----------More common Approach ------------//

    Distance* distptr;
    distptr = new Distance;

    distptr->get_dist();
    distptr->show_dist();

//-----------Less common Approach---------------//

    Distance& dist2 = *(new Distance);
    dist2.get_dist();
    dist2.show_dist();
    return 0;
}
