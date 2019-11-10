#include <iostream>
#include <algorithm>

using namespace std;

double in_to_cm(double i)
{
    return (i * 2.54);
}

int main()
{
        double in[] = {3.5,6.7,5.6,34.4,5.4};
        double cm[5];

        transform(in,in+5,cm,in_to_cm);

        for(int i=0;i<5;i++)
            cout<<cm[i]<<"  ";
        cout<<endl;

        return 0;
}