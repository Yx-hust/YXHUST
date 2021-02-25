#include<iostream>
#include<string>
using namespace std;
struct CandyBar{
    string brand;
    double weight;
    int energy; 
};
void set_CandyBar(CandyBar & a,const char *b="Millennium Munch",double c=2.85,int d=350);
void show_CandyBar(const CandyBar & a);
int main(void)
{
    CandyBar a;
    char b[20]={'\0'};
    double c;
    int d;
    cout<<"input the brand,no more than 19 chars"<<endl;
    cin.getline(b,19);
    cout<<"input the weight"<<endl;
    cin>>c;
    cout<<"input the energy(integer)"<<endl;
    cin>>d;
    set_CandyBar(a,b,c,d);
    show_CandyBar(a);
    cout<<"default output of CandyBar"<<endl;
    set_CandyBar(a);
    show_CandyBar(a);
    return 0;
}
void set_CandyBar(CandyBar & a,const char* b,double c,int d)
{
    a.brand=b;
    a.weight=c;
    a.energy=d;
}
void show_CandyBar(const CandyBar & a)
{
    cout<<a.brand<<endl;
    cout<<a.energy<<endl;
    cout<<a.weight<<endl;
}
