#include <iostream>

using namespace std;
int *sort2(int Ar[],int n)
{
    int i,j,temp;
    int *head;
    head =new int [n];
    for(i=0;i<n;i++)
        head[i]=Ar[i];
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(head[j]>head[i])
                swap(head[i],head[j]);
        }
    }
    return head;
}

int main()
{
    int i,n;
    int * myarray;
    int *outarray;
    cin>>n;
    myarray=new int[n];
    for(i=0;i<n;i++)
        cin>>myarray[i];
    outarray=sort2(myarray,n);
    for(i=0;i<n;i++)
        cout<<outarray[i]<<endl;
    return 0;
}
