#include <iostream>
using namespace std;

class stx
{
private:
    static int countx;
public:
    void counter()
    {
        countx++;
    }
    void display()
    {
        cout<<countx;
    }
};
int stx::countx = 0;

int main()
{
    stx ob1,ob2,ob3;
    ob1.counter();
    ob1.counter();
    ob2.display();
    ob3.display();
}
