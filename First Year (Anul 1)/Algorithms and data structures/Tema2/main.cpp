#include <iostream>

using namespace std;
int i,n,v[1001],a[999999],mx;
int main()
{

    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>v[i];
        a[v[i]]++;
        if(v[i]>mx)
            mx=v[i];
    }
    for(i=0; i<=mx; i++)
        if(a[i]%2==1)
        {
            cout<<i;
            break;
        }
    return 0;
}
