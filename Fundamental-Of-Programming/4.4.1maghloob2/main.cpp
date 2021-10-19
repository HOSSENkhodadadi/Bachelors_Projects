#include <iostream>

using namespace std;

int main()
{
    int n1,n2,s=1,sum=0;
    cin>>n1;
    n2=n1;
    while(n2!=1)
        {
            s*=10;
            n2/=10;
        }
    while(n1!=0)
    {
        sum+=s*(n1%10);
        s=s/10;
        n1/=10;
    }
    cout<<sum*17;
    return 0;
}
