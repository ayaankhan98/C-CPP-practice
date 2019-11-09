#include <iostream>

using namespace std;

struct mobile
{
    float price;
    string model;
    int ram_size,rom_size;
};

int main()
{
    mobile azf3;
    azf3.price = 8999.0;
    azf3.model = "ASUS ZENFONE 3 LASER";
    azf3.ram_size = 4;
    azf3.rom_size = 32;
    cout<<"Model : "<<azf3.model<<endl;
    cout<<"RAM : "<<azf3.ram_size<<"GB"<<endl;
    cout<<"ROM : "<<azf3.rom_size<<"GB"<<endl;
    cout<<"Price : "<<azf3.price<<endl;
}
