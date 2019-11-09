#include <iostream>

using namespace std;

class where
{
    private:
        char arr[10];
    public:
        void revel()
        {
            cout<<"My object adress is : "<<this<<endl;
        }
};

int main()
{
    where w1, w2;
    w1.revel();
    w2.revel();

    return 0;
}