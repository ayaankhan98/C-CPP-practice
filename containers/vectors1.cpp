#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(10);
         v1.push_back(22);
     v1.push_back(30);
    // v1.push_back(55);
    // v1.push_back(45);
    // v1.push_back(898);
    // v1.push_back(99);
    // v1.push_back(1011);
    // v1.push_back(107);

    v1[1] =101;

    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<"  ";
    cout<<"\n";
    cout<<v1.capacity()<<endl;
    return 0;

}