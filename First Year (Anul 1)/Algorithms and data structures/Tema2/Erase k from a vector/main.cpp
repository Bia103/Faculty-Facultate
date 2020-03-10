#include <iostream>

using namespace std;
int n,k,i,j,v[1001],ok;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    cin>>k;
    i=1;
    /*Stergerea primei aparitii a lui k
    while(ok==0&&i<=n)
    {
        if(v[i]==k)
        {
            for(j=i+1;j<=n;j++)
                v[j-1]=v[j];
            n--;
            ok=1;
        }
        else i++;
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";*/
    while(i<=n)
    {
        if(v[i]==k)
        {
            for(j=i+1;j<=n;j++)
                v[j-1]=v[j];
            n--;
        }
        else i++;
    }
     for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
