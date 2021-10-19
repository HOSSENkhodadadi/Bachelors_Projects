#include <iostream>

using namespace std;

int main()
{

        float t=0,a=1000,x;
        cin>>x;
    while(a>.001)
    {
        while(t*t<=x)
        {
            t+=a;
        }
        t-=a;
        a/=10;
    }
    cout<<t;
    return 0;
}
