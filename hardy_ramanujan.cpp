#include <iostream>
#include<math.h>
using namespace std;

int main()
{
     double n,b=0,bkp1=0,bkp2=0,bkp3=0,bkp4=0;
     int step=0;
     cout<<"Enter : ";
     cin>>n;
     for(double i=1;i<pow(n,0.333333333);i++)
     {
         for(double j=1;i<pow(n,0.333333333);j++)
         {
             b=pow(i,3.0)+pow(j,3.0);
             if((n==b)&&(bkp1!=j&&bkp2!=i)&&(bkp3!=j&&bkp4!=i))
             {
                 if(step==0)
                 {
                      bkp1=i;
                      bkp2=j;
                 }
                 else if(step==1)
                 {
                     bkp3=i;
                     bkp4=j;
                 }
                    step++;
             }
             else if(b>n)
                break;
         }

     }
     if(step==2)
        cout<<"Hardy Ramannujan";
    else
        cout<<"Not Hardy Ramanujan";
    return 0;
}
