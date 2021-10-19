#include <iostream>

using namespace std;

int main()
{
    int A[50],n,i,x;
    cin>>n;
    cin>>x;
    for(i=0;i<=n-1;i++)
        cin>>A[i];
    for(i=0;i<=n-1;i++)
    {
        if(A[i]==x)
        cout<<i;
    }

    return 0;
}
