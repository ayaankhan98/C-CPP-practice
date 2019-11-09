#include <iostream>

using namespace std;

class where
{
    private:
        int alpha;
    public:
        void tester()
        {
                this->alpha = 11;
                cout<<this->alpha;
        }
};

int main()
{
    where w1;
    w1.tester();

    return 1;
    
}