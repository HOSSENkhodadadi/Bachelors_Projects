#include <iostream>

using namespace std;

int main()
{
    int n,t=1;
    cin>>n;
    for(int i=-1;i<=2*n+1;i++)
    {
        if(i==n)
            cout<<"*";
        else
            cout<<" ";
    }
    cout<<endl;
    for(int j=1;j<=n-1;j++)
    {
        for(int i=0;i<=2*n+1;i++)
        {
            if(i==(n+t+1)||i==(n-t+1))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
        t++;
    }
    cout<<" ";
    for(int i=1;i<=2*n+1;i++)
        cout<<"*";

    return 0;
}
