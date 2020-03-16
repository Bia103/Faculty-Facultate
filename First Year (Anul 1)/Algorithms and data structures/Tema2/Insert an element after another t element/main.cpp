#include <iostream>

using namespace std;
int i,n,v[1001],t,ok,j,k,a[1001],x;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>v[i];
    cin>>t>>k;

    /*while(ok==0&&i<=n)
    {
        if(v[i]==k)
        {
            for(j=n;j>=i;j--)
                v[j+1]=v[j];
            n++;
            ok=1;
            v[i]=t;
        }
        else i++;
    }*/
    for(i=1;i<=t;i++)
        cin>>a[i];i=1;
    while(ok==0&&i<=n)
    {
        if(v[i]==k)
        {
            for(j=n+t;j>n;j--)
                v[j]=v[j-t];

            ok=1;
            x=1;
            //y=i+1
            for(j=i+1;j<=i+t;j++)
            {v[j]=a[x];x++;}
            n=n+t;
        }
        else i++;
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
/*
6
1 2 2 3 4 5
5
2
9 8 7 7 6
*/
