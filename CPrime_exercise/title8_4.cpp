#include<iostream>
#include<cstring>
using namespace std;
struct stringy{
    char *str;
    int ct;
};
void set(stringy & s,const char *p);
void show(const stringy & s,int n=1);
void show(const char *p,int n=1);
int main()
{
   stringy beany;
   char testing[] = "Reality isn't what it used to be.";
 
   set (beany,testing);   //first argument is a reference,
                         // allocates space to hold copy of testing,
                         // sets str member of beany to point to the
                         // new block,copies testing to new block,
                         // and sets ct member of beany
   show (beany);    //prints member string once
   show (beany,2);   //prints member string twice
   testing[0] = 'D';
   testing[1] = 'u';
   show (testing);   //prints testing string once
   show (testing,3); //prints testing string thrice
   show ("Done!");
   return 0;
}
void set(stringy & s,const char *p)
{
    s.ct=strlen(p);
    s.str=new char[s.ct+1]; 
    strcpy(s.str,p);
}
void show(const stringy & s, int n)    //show版本1
{
    for(int i=0;i<n;i++)
    {
     cout<<s.str<<endl;
    }
}

void show(const char * p,int n)          //show版本2
{
   for(int i=0;i<n;i++)
   {
     cout<<p<<endl;
   }
}