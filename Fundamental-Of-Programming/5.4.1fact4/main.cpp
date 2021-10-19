#include <iostream>

using namespace std;

int main()
{
    int x,t=1,a,i,sum=0,z,temp;
    for( temp=145; temp<=1500; temp++)
    {
        x=temp;
        while(x!=0)
        {
            a=x%10;
            for(i=2; i<=a; i++)
                t*=(i);
            sum+=t;
            x/=10;
            t=1;
        }
        if(temp==sum)
            cout<<temp<<endl;

    }

    return 0;
}
