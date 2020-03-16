#include <iostream>
#include <math.h>
using namespace std;
int n,a[1001],s=0,x,i,t;
int main()
{
    cin>>n;
    for(i=1;i<=n+1;i++)
        cin>>a[i];
    cin>>t;
    for(i=1;i<=n+1;i++)
    {
        s=s+a[i]*pow(t,i-1);
        x++;

    }
    cout<<s;
   // i=2;
    //cout<<pow(i,4);
    return 0;
}
