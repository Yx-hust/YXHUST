#include<iostream>
template <typename T>
T max5(const T* a);
using namespace std;
int main(void){
    int a1[5]={1,2,3,4,5};
    double a2[5]={1.3,2.3,3.4,3.3,3.2};
    cout<<"the max of a1(int)"<<endl;
    cout<<max5(a1)<<endl;
    cout<<"the max of a2(double)"<<endl;
    cout<<max5(a2)<<endl;
    return 0;
}
template <typename T>
T max5(const T *a)
{
    T max;
    max=a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}