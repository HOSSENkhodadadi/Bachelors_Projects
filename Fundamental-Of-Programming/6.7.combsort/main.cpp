#include <iostream>

using namespace std;

int main()
{
    int z,gap,n,x,i,j=0;
    float A[100];
    cin>>n;
    for(z=0;z<n;z++)
        cin>>A[z];
    gap=n;
    while(gap!=1)
    {
    x=gap/1.3;
    if(x>=1)
        gap=x;
    else
        gap=1;
    for(i=0;i+gap<n;i++)
        {
        if(A[i]>A[i+gap])
        swap(A[i],A[i+gap]);
        }
    }
    for(z=0;z<n;z++)
       cout<<A[z]<<" ";
    return 0;
}

