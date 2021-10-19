//جست وجوی رشته داخل رشته دیگر
#include <iostream.h>
#include<string>
#include<cstdlib>
//کاربرد s.begin,s.end,s.append,
using namespace std;

int main()
{
    int flag=1,t=0,m=0;
    string a,b;
    int counter=0;
    cout<<"reshte marga ra vared konid"<<endl;
    getline(cin,a);
    cout<<"reshte ke mi khahid biabid"<<endl;
    getline(cin,b);
    for(int i=0;i<a.length();i++)
    {
        if((int)a[i]<122&&(int) a[i]>97)
        (int) a[i]=(int) a[i]-32;

    }
    for(int i=0;i<b.length();i++)
    {
        if((int)b[i]<122&&(int) b[i]>97)
        (int) b[i]=(int) b[i]-32;
    }
    cout <<a<<endl;
        cout<<b<<endl;
        return 0;
}
