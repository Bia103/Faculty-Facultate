#include <iostream>

using namespace std;
int n,m,p[1001],q[1001],i,x,c[1001];
int main()
{
    cin>>n;
    n++;
    for(i=1; i<=n; i++)
        cin>>p[i];
    cin>>m;
    m++;
    for(i=1; i<=m; i++)
        cin>>q[i];
    x=max(m,n);
    cout<<p[1]+q[1]<<"+";
    for(i=2; i<=x; i++)
    {
         if(i!=x)
          cout<<p[i]+q[i]<<"x^"<<i-1<<"+";
          else cout<<p[i]+q[i]<<"x^"<<i-1;
    }

    return 0;
}
/*
3
2 5 7 1
4
1 4 1 9 8
*/
