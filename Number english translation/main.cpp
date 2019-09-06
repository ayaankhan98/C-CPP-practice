#include <iostream>
#include<math.h>
#include<conio.h>

using namespace std;

 char text_ones[][20]={"","one ","two ","three ","four ","five ","six ",
                            "seven ","eight ","nine ","ten ","eleven ","twelve "
                            ,"thirteen ","fourteen ","fifteen ","sixteen ","seventeen ",
                            "eighteen ","nineteen "};
    char text_tens2[][20]={" ","Ten ","Twenty ","thirty ","fourty ","fifty ","sixty ",
                            "seventy ","eighty ","ninety "};
    char power[][20]={"","Hundred ","thousand ","million "};
void write_power(int n)
{
    if(n==1)
        cout<<power[n]<<" ";
    else if(n==2)
        cout<<power[n]<<" ";
    else if(n==3)
        cout<<power[n]<<" ";
}
int write_ones(int num)
{
    cout<<text_ones[num];
    return 0;
}
int chunck_breaker(int get,int chunk_number)
{
    chunk_number--;
    chunk_number*=3;
    int chunck=get/pow(10,chunk_number);
    return chunck;

}
int calc_chunck_number(int bkp)
{
    int chunck=0;
    for(;bkp!=0;)
    {
       bkp/=1000;
       chunck++;
    }
    return chunck;
}
int write_tens(int num)
{
    if(num>10&&num<20)
    {
        cout<<text_ones[num]<<" ";
       // write_ones(num);
    }
    else
    {
        int r=num/10;
        cout<<text_tens2[r]<<" ";
        num-=r*10;
        write_ones(num);
    }
}

int write_hundred(int num)
{
    int r=num/100;
    cout<<text_ones[r]<<" ";
    num-=r*100;
    write_power(1);
    write_tens(num);
    return 0;

}
int main()
{
    int num,get_chunck_number=0;
    cout<<"Enter : ";
    cin>>num;
    get_chunck_number=calc_chunck_number(num);
        for(;get_chunck_number>0;get_chunck_number--)
        {
            int chunck_part=chunck_breaker(num,get_chunck_number);
            if(chunck_part==0)
            {
                continue;
            }
            else if(chunck_part>0&&chunck_part<10)
            {
                write_ones(chunck_part);
            }
            else if(chunck_part>9&&chunck_part<100)
            {
                write_tens(chunck_part);
            }
            else if(chunck_part>99&&chunck_part<1000)
            {
                write_hundred(chunck_part);
            }
            int x=0,y=0;
            y=get_chunck_number;
            y--;
            y*=3;
            x=pow(10,y);
            num%=x;
            if(get_chunck_number==3)
                cout<<power[get_chunck_number];
            else if(get_chunck_number==2)
                cout<<power[get_chunck_number];
        }
        getch();
}
