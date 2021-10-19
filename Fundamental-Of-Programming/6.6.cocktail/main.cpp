#include <iostream>

using namespace std;

int main()
{
    int n,z,i,s,k=0,j;
    float A[100];
    cin>>n;
    for(z=0;z<n;z++)
        cin>>A[z];
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(A[j]<A[j+1])
                swap(A[j],A[j+1]);
        }
        for(s=n-k-1;s>k+1;s--)
        {
            if(A[s]>A[s-1])
            {
                swap(A[s],A[s-1]);
            }
        }
        k++;
    }
    for(z=n-1;z>=0;z--)
       cout<<A[z]<<" ";
    return 0;
}
