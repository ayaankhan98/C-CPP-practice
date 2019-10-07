#include<iostream>
#include<math.h>


using namespace std;

int main()
{
    double n,bkp1=0,bkp2=0,bkp3=0,bkp4=0;
    int step=0;
    cout<<"Enter The Number  : ";
    cin>>n;
    for(double i=1;i<n;i++)
    {
        for(double j=1;j<n;j++)
        {
            cout<<"i is : "<<i<<endl;
            cout<<"j is : "<<j<<endl;
            cout<<(pow(i,3.0)+pow(j,3.0))<<endl;
            cout<<"n is :"<<n<<endl;
            if(n==(pow(i,3.0)+pow(j,3.0)))
            {
                cout<<"HELLO I GET TRUE ";
                if((bkp1!=j&&bkp2!=i)||(bkp3!=j&&bkp4!=i))
                    step++;
                    cout<<"step is : "<<step<<endl;
                    if(step==1)
                    {
                       bkp1=i;
                       bkp2=j;
                    }
                    else if(step==2)
                    {
                        bkp3=i;
                        bkp4=j;
                    }
                    cout<<"bkp1 : "<<bkp1<<endl;
                    cout<<"bkp2 : "<<bkp2<<endl;
                    cout<<"bkp3 : "<<bkp3<<endl;
                    cout<<"bkp4 : "<<bkp4<<endl;

            }
            else if(((pow(i,3.0)+pow(j,3.0))>n))
            {
                break;
            }
        }
    }
    if(step==2)
    {
        cout<<"The Number Can Be Expressed As A Sum Of Cubes Of Two Numbers In Two Different Ways Hence \n It's A Hardy Ramanujan Number";
    }
    else
        cout<<"Not A Hardy Ramanujan Number "  ;
    return 0;
}
