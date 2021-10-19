#include <iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
    float max,min,sum=0;
    int n;
    ifstream file1;
    string s;
    ofstream file2;
    float *p;
    s="C:\\1.txt";
    file1.open(s.c_str(),ios::in);
    if(file1.is_open())
    {
        file1>>n;

        p=new float[n];
        file1>>p[0];
        max=p[0];
        min=p[0];
        for(int i=1;i<n;i++)
        {
            file1>>p[i];
            if(p[i]<min)
                min=p[i];
            if(p[i]>max)
                max=p[i];
            sum+=p[i];
        }
    }
    file1.close();
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(p[j]<p[i])
                    swap(p[j],p[i]);
            }
        }
    file2.open("C:\\2.txt",ios::out);
    if(file2.is_open())
    {
        cout<<endl;
        file2<<"min="<<min<<endl;
        file2<<"max="<<max<<endl;
        file2<<"miangin"<<sum/n<<endl;
        for(int i=0;i<n;i++)
            file2<<p[i]<<endl;
    }
    file2.close();
    delete []p;
    return 0;
}
