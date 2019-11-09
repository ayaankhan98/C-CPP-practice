#include <iostream>

using namespace std;

class Distance
{
private:
    const int MTF;
    int feet;
    float inches;
public:
    Distance():feet(0), inches(0.0), MTF(3.280833F)
    {}
    Distance(float meters): MTF(3.280833F)
    {
        float fltfeet = meters*MTF;
        feet = int(fltfeet);
        inches = 12*(fltfeet-feet);
    }
    Distance(int ft, float in):feet(ft), inches(in), MTF(3.280833F)
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
        cout<<feet<<"-"<<inches;
    }
    operator float() const
    {
        float fracfeet = inches/12;
        fracfeet +=static_cast<float>(feet);
        return fracfeet/MTF;
    }
};

int main()
{
    float mtrs;
    Distance dist1(2.38F);
    cout<<endl<<"Distance 1 = ";
    dist1.show_dist();

    mtrs = static_cast<float>(dist1);

    cout<<endl<<"Distance 1 = "<<mtrs;

    Distance dist2(5,10.25);
    mtrs = dist2;
    cout<<endl<<"Distance 2 = "<<mtrs;

    return 0;
}
