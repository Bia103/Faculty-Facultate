#include <iostream>

using namespace std;
int n,i,j,v[1001],k,x,m,p,ok,u;
int main()
{
     cin>>n;

    for(i=1;i<=n;i++)
        cin>>v[i];
    cin>>k;
    u=n;
    p=1;
    while(p<=u&&ok==0)
    {
        m=(u+p)/2;
        if(v[m]==k)
            ok=1;
        else if(k<v[m])
              u=m-1;
        else p=m+1;
    }
    if(ok)
        cout<<m;
    else cout<<"Elementul cautat nu se afla printre cele continute de vector";
    return 0;
}
