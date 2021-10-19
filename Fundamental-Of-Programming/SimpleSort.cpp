#include <iostream>

using namespace std;

int main()
{
    int A[50],n,i,j=0;
    cin>>n;
    for(i=0;i<=n-1;i++)
        cin>>A[i];
    for(i=0;i<=n-1;i++)
    {
        for(j=i;j<n-1;j++)
        {
          if(A[j]<A[j+1])
        {
            swap(A[j],A[j+1]);
        }
        }
        }

     for(i=0;i<=n-1;i++)
        cout<<A[i];
    return 0;
}
