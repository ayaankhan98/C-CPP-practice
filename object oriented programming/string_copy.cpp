#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[]= {"this is the string which is to be copied to str2"};
    char str2[100];

  /*  int i;
    for(i=0;i<strlen(str1);i++)
        str2[i]=str1[i];
    str2[i]='\0';
    cout<<"\nNEW COPIED STRING IS : "<<str2;*/

    // using library function

    strcpy(str2,str1);
    cout<<"new copied string is : "<<str2;
    return 0;
}
