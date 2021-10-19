#include <iostream>

using namespace std;

int main()
{
    int A[50],n,i,j,k;
    cin>>n;
    A[0]=A[1]=1;
    for(i=0;i<=n-2;i++)
        A[i+2]=A[i]+A[i+1];
    for(j=n;j>=0;j--)
    {
      for(k=1;k<=A[j];k++)
            cout<<"*";
    cout<<endl;
    }

    return 0;
}
