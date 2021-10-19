//جست وجوی رشته داخل رشته دیگر
#include <iostream>
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
        if(b[0]==a[i])
        {
            t=i;
            for(int k=0;k<b.length();k++)
            {
                if(b[k]!=a[i])
                    flag=0;
                i++;
            }
            if(flag==1)
            {
              cout<<t<<endl;
              m++;
              counter=1;
            }

            i=t;
        }
    }
    cout<<"tedad tekrar";
    cout<<m;
    if(counter==0)
        cout<<"reshte mord nazar yaft nashod";
    return 0;
}

