#include <iostream>
#include <cstring>

using namespace std;

class part{
private:
    char partname[30];
    int partnumber;
    float cost;

public:
    void setpart(char pname[], int pnumber, float c)
    {
        strncpy(partname,pname,4);
        partnumber = pnumber;
        cost = c;
    }
    void showpart()
    {
        cout<<"Part Name : "<<partname<<endl;
        cout<<"Part Number : "<<partnumber<<endl;
        cout<<"Cost : "<<cost<<endl;
    }
};

int main()
{
    part part1, part2;
    part1.setpart("Handel bolt",4473,21.55);
    part2.setpart("Start Lever",9924,419.25);
    cout<<"\n-----------FIRST PART-------------\n";
    part1.showpart();
    cout<<"\n----------SECOND PART-------------\n";
    part2.showpart();
    return 0;
}
