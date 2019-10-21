#include <iostream>

using namespace std;

enum posneg {pos,neg};

class Distance
{
protected:
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
    void show_dist() const
    {
        cout<<feet<<"-"<<inches;
    }
};

class Distsign:public Distance
{
protected:
    posneg sign;
public:
    Distsign():Distance()
    {
        sign = pos;
    }
    Distsign(int ft, float in, posneg sg):Distance(ft,in)
    {
        sign = sg;
    }
    void get_dist()
    {
        Distance::get_dist();
        char ch;
        cout<<endl<<"Sign : ";
        cin>>ch;
        sign = (ch=='+')?pos:neg;
    }
    void show_dist()
    {
        if(sign == pos)
            cout<<"(+)";
        else
            cout<<"(-)";
        Distance::show_dist();
    }
};

int main()
{
    Distsign d1;
    d1.get_dist();
    d1.show_dist();
    return 0;
}
