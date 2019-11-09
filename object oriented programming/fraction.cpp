#include <iostream>
#include <cstdlib>

using namespace std;

class fraction
{
private:
    int nume,denom;
public:
    fraction():nume(0), denom(1)
    {}
    fraction(int n, int d)
    {
        if(d != 0)
        {
            nume = n;
            denom = d;
        }
        else
            exit(1);
    }
    void get_frac()
    {
        bool valid = true;
        while (valid)
        {
            cout<<endl<<"Enter Numerator : ";
            cin>>nume;
            cout<<endl<<"Enter Denominator : ";
            cin>>denom;
            valid = check_fraction(denom);
        }
    }
    bool check_fraction(int denom)
    {
        if(denom!=0)
            return false;
        cout<<endl<<"WARNING ! Denominator Cannot Be Zero \nEnter Again";
        return true;
    }
    void show_frac()
    {
        cout<<endl<<nume<<"/"<<denom;
    }
    fraction operator + (fraction);
    fraction operator - (fraction);
    fraction operator * (fraction);
    fraction operator / (fraction);
};

fraction fraction::operator + (fraction f1)
{
    fraction temp;
    temp.denom = denom * f1.denom;
    temp.nume = ((temp.denom/denom)*nume)+((temp.denom/f1.denom)*f1.nume);
    return temp;
}

fraction fraction::operator - (fraction f1)
{
    fraction temp;
    temp.denom = denom * f1.denom;
    temp.nume = ((temp.denom/denom)*nume)-((temp.denom/f1.denom)*f1.nume);
    return temp;
}

fraction fraction::operator * (fraction f1)
{
    fraction temp;
    temp.nume = nume * f1.nume;
    temp.denom  = denom * f1.denom;
    return temp;
}

fraction fraction::operator / (fraction f1)
{
    fraction temp;
    temp.nume = nume * f1.denom;
    temp.denom = denom * f1.nume;
    return temp;
}

int main()
{
    fraction f1,f2;
    f1.get_frac();
    f2.get_frac();
    fraction add,sub,mul,div;
    add = f1 + f2;
    sub = f1 - f2;
    mul = f1 * f2;
    div = f1 / f2;
    add.show_frac();
    sub.show_frac();
    mul.show_frac();
    div.show_frac();
    return 0;
}
