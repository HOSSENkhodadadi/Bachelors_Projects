#include <iostream>

using namespace std;

int main()
{
    int n,t=0,i,j;
    int keep;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<i*j;
            keep=i*j;
            t=0;

            while((keep)!=0)
        {
           (keep)/=10;
           t++;
        }
        for(int k=0;k<(5-t);k++)
            cout<<" ";
    }
    cout<<endl;

        }

    return 0;
}
