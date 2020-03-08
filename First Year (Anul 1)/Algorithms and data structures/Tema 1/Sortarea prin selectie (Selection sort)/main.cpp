#include <iostream>

using namespace std;
int n,i,j,v[1001],k,x,mi,p;
int main()
{
    cin>>n;//citirea numarului de elemente din vector
    for(i=1;i<=n;i++)
        cin>>v[i];//citirea elementelor
    for(i=1;i<n;i++)
    {
        mi=v[i];
        p=i;
        for(j=i+1;j<=n;j++)
            if(mi>v[j])
            {
            p=j;
            mi=v[j];
            }
            swap(v[i],v[p]);
        for(j=1;j<=n;j++)
        cout<<v[j]<<" ";
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
