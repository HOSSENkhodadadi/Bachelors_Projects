#include <iostream>

using namespace std;

int main()
{
   int n;
    cin>>n;
    n--;
    if(n==0)
    {
        cout<<"**"<<endl;
        cout<<"**";
    }
    else if(n==-1)
        cout<<"*";
    else
    {


    for(int i=0;i<=n+1;i++)
        cout<<"*";
    cout<<endl;
    for(int k=0;k<=n-1;k++)
    {
        for(int j=0;j<=n+1;j++)
        {
            if((j==0)||(j==(n+1)))
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<=n+1;i++)
        cout<<"*";

}
    return 0;
}
