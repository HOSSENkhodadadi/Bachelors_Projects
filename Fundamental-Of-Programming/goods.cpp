#include <iostream>

using namespace std;
struct kala
{
    string name;
    int price;
    float weight;
};

int main()
{
    int n,i=0;
    cin>>n;
    struct kala karray[100];
    for(i=0;i<n;i++)
    {
        cin>>karray[i].name>>karray[i].price>>karray[i].weight;
    }
    for(i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(karray[j].name<karray[i].name)
            {
                swap(karray[i].name,karray[j].name);
                swap(karray[i].price,karray[j].price);
                swap(karray[i].weight,karray[j].weight);

            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<karray[i].name<<"\t"<<karray[i].price<<"\t"<<karray[i].weight<<endl;
    }
    return 0;
}
