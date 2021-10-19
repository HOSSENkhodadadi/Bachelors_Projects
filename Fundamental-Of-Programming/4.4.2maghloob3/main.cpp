#include <iostream>

using namespace std;

int main()
{
    unsigned long int n;
    int b=0;
    cin>>n;
    while(n>0)
    {
        b+=n%10;
        n/=10;
        b*=10;
    }
    cout<<(b/10)*17;
    return 0;
}
