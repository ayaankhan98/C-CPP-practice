#include <iostream>
#include <algorithm>

using namespace std;

double in_to_cm(double i)
{
    cout<<i*2.54<<"  ";
}

int main()
{
        double in[] = {3.5,6.7,5.6,34.4,5.4};

        for_each(in,in+5,in_to_cm);
        cout<<endl;

        return 0;
}