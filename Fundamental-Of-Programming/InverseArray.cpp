#include <iostream>

using namespace std;

int main()
{
    int A[50],n,i,temp;
    cin>>n;
    for(i=0;i<=n-1;i++)
    {
        cin>>A[i];
    }
    for(i=0;i<=(n/2);i++)
    {
        temp=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=temp;
    }
    for(i=0;i<=n-1;i++)
    {
       cout<<A[i]<<endl;
    }
    return 0;
}
