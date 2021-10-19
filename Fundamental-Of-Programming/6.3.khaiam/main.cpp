#include <iostream>

using namespace std;

int main()
{
    int A[100]={0};
    int B[100]={0};
    int i,j,n,z;
    A[1]=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            B[j]=A[j]+A[j+1];
            cout<<B[j]<<" ";
        }
        cout<<endl;
        for(z=0;z<=j;z++)
            A[z+1]=B[z];
    }

    return 0;
}
