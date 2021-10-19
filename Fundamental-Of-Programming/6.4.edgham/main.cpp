#include <iostream>

using namespace std;

int main()
{
    int l1,l2,k1=0,k2=0,k=0,i;
    float A1[100],A2[100],B[200];
    cin>>l1>>l2;
    for(i=0;i<l1;i++)
        cin>>A1[i];
    for(i=0;i<l2;i++)
        cin>>A2[i];
    while(k1<l1&&k2<l2)
    {
        if(A1[k1]<A2[k2])
        {
            B[k]=A1[k1];
            k++;
            k1++;
        }
        else
        {
           B[k]=A2[k2];
           k++;
           k2++;
        }
    }
    if(k1==l1)
    {
        while(k2<l2)
        {
            B[k]=A2[k2];
           k++;
           k2++;
        }
    }
    else
    {
        while(k1<l1)
        {
            B[k]=A1[k1];
            k++;
            k1++;
        }
    }
    for(i=0;i<k;i++)
    {
        cout<<B[i]<<" ";
    }
    return 0;
}
