#include <iostream>

using namespace std;
int *sort1(int n,int *p)//p[]
    {
        int *head,j;
        head=new int [n];
        for(int i=0;i<n;i++)
            head[i]=p[i];
        for(int i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(head[j]<head[i])
                {
                    swap(head[j],head[i]);
                }
            }
        }
        return head;
    }
int main()
{
    int *p,*head,n;
    cin>>n;
    p=new int[n];
    for(int i=0;i<n;i++)
        cin>>p[i];
    head=sort1(n,p);

    for(int i=0;i<n;i++)
        cout <<head[i]<<endl;


    return 0;
}
