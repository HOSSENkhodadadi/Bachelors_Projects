#include <iostream>

using namespace std;

int main()
{
    unsigned long long int x;
    int t=1,a,i,sum=0;
    cin>>x;
    if(x==0)
        cout<<1;
    else
    {
        while(x!=0)
    {
            a=x%10;
            for(i=2;i<=a;i++)
                t*=(i);
            sum+=t;
            x/=10;
            t=1;
    }
    cout<<sum;

    }

    return 0;
}
