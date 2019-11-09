#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("Man");
    string s2 = "Beast";
    string s3;
    int i(1);  //SOMETHING NEW !!
    s3 = s1;
    cout<<endl<<"s3 : "<<s3;
    s3 = "Neither "+s1+"Nor ";
    s3+=s2;
    cout<<endl<<"s3 : "<<s3;
    s1.swap(s2);
    cout<<endl<<s1<<" nor "<<s2<<endl;
    cout<<i;
    return 0;
}
