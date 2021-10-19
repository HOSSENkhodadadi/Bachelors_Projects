#include <iostream>

using namespace std;

int main()
{
int A[50],n,i;
double sum=0,avg=0,sorat=0;
    cin>>n;
    for(i=0;i<=n-1;i++){
        cin>>A[i];
        sum+=A[i];
    }
    avg=(sum/n);
    for(i=0;i<=n-1;i++)
        sorat+=((A[i]-avg)* (A[i]-avg));
     cout<<"varians="<<sorat/n;

    return 0;
}
