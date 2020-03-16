#include <iostream>

using namespace std;
int n,i,v[1001],mx,mi;
int main()
{
    cin>>n;
    cin>>v[1];
    mx=v[1];
    mi=v[1];
    for(i=2; i<n; i=i+2)
    {
        cin>>v[i]>>v[i+1];
        if(v[i]<v[i+1])
        {
            if(v[i]<mi)
                mi=v[i];
            if(v[i+1]>mx)
                mx=v[i+1];

        }
        else
            {
            if(v[i]>mx)
                mx=v[i];
            if(v[i+1]<mi)
                mi=v[i+1];

        }
    }
   if(n%2==0)
    {cin>>v[n];
        if(v[n]>mx)
        mx=v[n];
        if(v[n]<mi)
         mi=v[n];}
cout<<mi<<" "<<mx;
    return 0;
}
