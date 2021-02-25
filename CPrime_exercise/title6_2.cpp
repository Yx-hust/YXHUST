#include<iostream>
#include<array>
int main(){
    using namespace std;
    double donation,average=0;
    int i=0;
    array<double,11> arr;
    cout<<"Please enter the number"<<endl;
    while (i<10&&(cin>>donation))
    {
        arr[i]=donation;
        average+=donation;
        i++;       
    }
    if(i>0)
      average=average/i; 
    cout<<average<<endl;
    
}