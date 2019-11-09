#include <iostream>
#include <conio.h>

using namespace std;

enum itsaword {NO,YES};

int main()
{
    itsaword isword = NO;
    char ch = ' ';
    int wordcount = 0;
    cout<<"Enter the pharse : ";
    do
    {
        ch = getche();
        if(ch==' '||ch=='\r')
        {
            if(isword == YES)
            {
                wordcount++;
                isword = NO;
            }
        }
    else
        if (isword == NO)
            isword = YES;
    }
    while(ch!='\r');
    cout<<"\n\nWord Count : "<<wordcount;
}
