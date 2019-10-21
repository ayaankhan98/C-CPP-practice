#include <iostream>

using namespace std;

class counter
{
protected:
    unsigned int countx;
public:
    counter(): countx(0)
    {}
    counter(int c): countx(c)
    {}
    int get_count()
    {
        return countx;
    }
    operator ++ ()
    {
        return ++countx;
    }
};

class countd:public counter
{
public:
    countd(int c): counter(c)
    {}
    operator --()
    {
        return --countx;
    }
};

int main()
{
    countd c1(0);
    ++c1;
    ++c1;
    ++c1;
    cout<<c1.get_count()<<endl;
    --c1;
    cout<<c1.get_count();
    return 0;
}
