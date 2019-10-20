#include <iostream>

using namespace std;
class counter
{
    unsigned int countx;
public:
    counter(): countx(0)
    {}
    counter (int c) : countx(c)
    {}
    unsigned int get_count() const
    {
        return countx;
    }
    counter operator ++ ()
    {
        return counter(++countx);
    }
    counter operator ++ (int)
    {
        return counter(countx++);
    }
};

int main()
{
    counter c1, c2;
    cout<<endl<<"c1 : "<<c1.get_count();
    cout<<endl<<"c2 : "<<c2.get_count();

    ++c1;
    c2 = ++c1;
    cout<<endl<<"c1 : "<<c1.get_count();
    cout<<endl<<"c2 : "<<c1.get_count();

    c2= c1++;
    cout<<endl<<"c1 : "<<c1.get_count();
    cout<<endl<<"c2 : "<<c2.get_count();

    return 0;
}
