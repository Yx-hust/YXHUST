#include<iostream>
#include<string>
using namespace std;
void str_toupper(string & s);
int main(void)
{
    string s;
    cout<<"Enter your string(q to quit):";
    cin>>s;
    while(s[0]!='q')
    {
        str_toupper(s);
        cout<<s<<endl;
        cout<<"Enter your string(q to quit):";
        cin>>s;
    }
    return 0;
}
void str_toupper(string & s)
{
    int i;
    for(i=0;i<(int)s.length();i++)
    {
        s[i]=toupper(s[i]);
    }
}
