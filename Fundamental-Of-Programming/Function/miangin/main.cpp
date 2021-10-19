#include <iostream>

using namespace std;
float miangin (float x,float y,float z)
{
    float t;
    t=((x+y+z)/3);
    return t;
}
int main()
{
    float a,b,c,k;
    cin>>a>>b>>c;
    k=miangin (a,b,c);
    cout<<k;

    return 0;
}
