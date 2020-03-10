#include <iostream>

using namespace std;
int i,m,n,j,p[1001],c[1001],q[1001],k;
int main()
{
    cin>>n;
    n=n+1;
    for(i=1; i<=n; i++)
        cin>>p[i];
    cin>>m;
    m=m+1;
    for(i=1; i<=m; i++)
        cin>>q[i];

    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=m;j++)
        {
            c[k]=c[k]+p[i]*q[j];
            k++;
        }
    }
    for(i=1;i<n+m;i++)
        if(i<n+m-1)
  cout<<c[i]<<"x^"<<i-1<<"+";
  else cout<<c[i]<<"x^"<<i-1;
       // cout<<c[m+n]<<"x^"<<m+n;
    return 0;
}
/*
3
1 1 1 1
2
2 1 2


*/
