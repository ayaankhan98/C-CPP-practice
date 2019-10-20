#include <iostream>

using namespace std;

int main()
{
    const int NAME = 20;
    const int COUNT = 7;
    char week[COUNT][NAME] = {"Sunday","Monday","Tuesday","Wednesday",
                            "Thursday","Friday","Saturday"};

    for(int i=0;i<COUNT;i++)
        cout<<week[i]<<endl;
    return 0;
}
