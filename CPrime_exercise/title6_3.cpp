#include<iostream>
int main(){
    using namespace std;
    cout<<"Please enter one of the following chioces"<<endl;
    cout<<"c) Jhon"<<"    "<<"p) Tony"<<endl;
    cout<<"t) Luke"<<"    "<<"g) Wang"<<endl;
    cout<<"Please enter one of c,p,g,t:";
    char ch;
    while (1)
    {
        switch(ch=cin.get())
        {
            case 'c':cout<<"Jhon";
                     break;
            case 'p':cout<<"Tony";
                     break;
            case 't':cout<<"Luke";
                     break;
            case 'g':cout<<"Wang";
                     break;
            default:cin.get();
                    cout<<"Please enter one of c,p,g,t:";
                    continue;                 
        }
        break;
    }
    return 0;
}    