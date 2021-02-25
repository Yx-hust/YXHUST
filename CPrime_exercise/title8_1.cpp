#include<iostream>
#include<string>
using namespace std;
void printstring(string s,int n=0);
int main()
{
    string s;
    int n;
    cout<<"输入你要打印的字符串"<<endl;
    cin>>s;
    cout<<"输入打印参数"<<endl;
    cin>>n;
    cout<<"first using"<<endl;
    printstring(s,n);
    cout<<"second using"<<endl;
    printstring(s,n);
    cout<<"third using"<<endl;
    printstring(s,n);
    cout<<"no arguement"<<endl;
    printstring(s);
    return 0;
}
void printstring(string s,int n)
{
    static int usingnum;
    usingnum+=1;
    int  i;
    if(n!=0)
    for(i=0;i<usingnum;i++)
    {
        cout<<s<<endl;
    };
}