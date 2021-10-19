#include <iostream>

using namespace std;

int main()
{
    unsigned long int n,a;
    cin>>n;
    a=0;
    while(n>0)
    {
        a+=(n%10);
        n/=10;
    }
    cout<<a;
    return 0;
}
