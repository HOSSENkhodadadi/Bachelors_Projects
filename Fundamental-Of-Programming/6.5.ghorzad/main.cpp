#include <iostream>

using namespace std;

int main()
{
    int i=1,j=2,n,z;
    float A[100];
    cin>>n;
    for(z=0;z<n;z++)
    {
        cin>>A[z];
    }

    while(i<n)
    {
        if(A[i]>A[i-1])
        {
            i=j;
            j++;
        }
        else
        {
            swap(A[i],A[i-1]);
            i--;
        }
    }
    for(z=0;z<n;z++)
    {
       cout<<A[z]<<" ";
    }
    return 0;
}
