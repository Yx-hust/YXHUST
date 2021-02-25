#include<iostream>
#include<fstream>
int main(){
    using namespace std;
    ifstream filein;
    filein.open("D:\\title6_8.txt");
    char ch;
    int num=0;
    while (filein.get(ch))
    {
        cout<<ch;
        num++;
    }
    cout<<num<<endl;
    filein.close();
}