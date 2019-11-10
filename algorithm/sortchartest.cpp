#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main()
{
    string names[] = {"George","Penny","Estelle","Don","Mike","Bob"};

    sort(names,names+6,greater<string>());

    for(int i=0;i<6;i++)
        cout<<names[i]<<"  ";
}

