#include <iostream>

using namespace std;

int main()
{    int k;
    k=(int)'a'-(int)'A';
    string s;
    cout<<"reshte mored nazar ra vared konid"<<endl;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if ((int) s[i]<=122&& (int) s[i]>=97)
        s[i]=(int)s[i]-k;
    }
    cout<<s;
    return 0;
}
