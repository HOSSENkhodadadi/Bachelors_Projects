#include <iostream>
using namespace std;
float *sort3(float *Ar,int n)
{
    /*float *head;
    head=new float[n];
    for(int i=0;i<n;i++)
        head [i]=Ar[i];*/
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(Ar[j+1]<Ar[j])
                swap(Ar[j+1],Ar[j]);
        }
    }
    return Ar;
}
int main()
{
    int n;
    float *M,*t;
    cin>>n;
    M=new float [n];
    for(int i=0;i<n;i++)
    {
        cin>>M[i];
    }
    t=sort3(M,n);
    for(int i=0;i<n;i++)
    {
        cout<<t[i]<<endl;
    }



    return 0;
}
