#include <iostream>
using namespace std;

int main()
{
    double ghad,mux=0;
    string esm,j;
    int b=10;
    while(b>0)
    {
        cin>>ghad>>esm;
        if(ghad>mux)
        {
            mux=ghad;
            j=esm;
        }
        b--;
    }
    cout<<j;

    return 0;
}
