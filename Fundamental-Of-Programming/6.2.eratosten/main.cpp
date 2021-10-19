#include <iostream>

using namespace std;

int main()
{
    int A[1001]={0},n,i,j;
    cin>>n;
    A[0]=A[1]=1;
    for(i=2;i<=(n/2);i++)
    {
        for(j=i;j<=n;j++)
        {
            if((j%i==0)&&(j!=i))
                A[j]=1;
        }
        i++;
        while(A[i]!=0)
            i++;
        i--;
    }
    for(i=0;i<=n-1;i++)
    {
        if(A[i]==0)
            cout<<i<<endl;
    }

    return 0;
}
