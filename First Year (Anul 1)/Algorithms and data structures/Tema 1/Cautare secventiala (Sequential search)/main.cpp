#include <iostream>

using namespace std;
int n,i,j,v[1001],k,x,mi,p;
int main()
{
    cin>>n;
    p=-1;
    for(i=1;i<=n;i++)
        cin>>v[i];
    cin>>k;
    for(i=1;i<=n;i++)
        if(k==v[i])
        {
        p=i;
        }
    cout<<p;
    return 0;
}
