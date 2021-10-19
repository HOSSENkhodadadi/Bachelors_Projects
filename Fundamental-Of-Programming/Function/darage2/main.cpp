#include <iostream>
using namespace std;
float sqrt (float x);
void moadele (float a,float b,float c,float &m,float &n,float &h)
{
    float k;
    k=b*b-4*a*c;
    if(k<0)
    {
        h=0;
    }
    else if(k==0)
    {
    m=(-b)/(2*a);
    h=1;
    }
    else
    {
        m=(-b+ sqrt (k))/(2*a);
        n=(-b- sqrt (k))/(2*a);
        h=2;
    }
}

int main()
{
    float x,y,z,m,n,h;
    cin>>x>>y>>z;
    moadele(x,y,z,m,n,h);
    if(h==0)
    {
        cout<<"reshe nadarad";
    }
    else if(h==1)
    {
        cout<<m;
    }
    else
    {
        cout<<m<<endl<<n;
    }
    return 0;
}
float sqrt (float x)
{
    float t=0,a=1000;
    while(a>.001)
    {
        while(t*t<x)
        {
            t+=a;
        }
        t-=a;
        a/=10;
    }
    return t;
}
