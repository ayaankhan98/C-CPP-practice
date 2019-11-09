#include <iostream>

using namespace std;

class gamma
{
    private:
        static int total;
        int id;
    public:
        gamma()
        {
            total++;
            id = total;
        }
        ~gamma()
        {
            total--;
            cout<<"\nId deleted"<<id;
        }
        void showid()
        {
            cout<<"\nid : "<<id;
        }
        static void showtotal()
        {
            cout<<endl<<"total : "<<total;
        }
};

int gamma::total = 0;

int main()
{
    gamma g1;
    g1.showid();

    gamma::showtotal();
    gamma g2,g3;
    g2.showid();
    g3.showid();
    gamma::showtotal();
    cout<<"******end of program****\n";
    return 0;
}