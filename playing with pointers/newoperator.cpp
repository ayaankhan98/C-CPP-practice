#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char* str = "Python the killer !";

    int len = strlen(str);

    cout<<endl<<"str : "<<*str<<endl;

    char* ptr = new char[len+1];

    strcpy(ptr,str);

    cout<<"ptr : "<<ptr<<endl;

    delete [] ptr;

    int a;
    int* ptrint = &a;

    *ptrint++ + *++ptrint;

    cout<<endl<<"ptrint : "<<*ptrint<<endl;


    return 0;

}
