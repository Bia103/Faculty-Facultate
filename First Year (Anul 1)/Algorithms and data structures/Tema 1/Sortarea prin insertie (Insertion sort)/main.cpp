#include <iostream>

using namespace std;
int n,i,j,v[1001],k,x;
int main()
{
    cin>>n;//citirea numarului de elemente din vector
    for(i=1;i<=n;i++)
        cin>>v[i];//citirea elementelor
    for(i=2;i<=n;i++)//parcurgerea fiecarui element in vederea ordonarii
    {
        x=v[i];//se copiaza elementul care va fi inserat pe pozitia ce ii va reveni in vector
        k=i-1;//se incepe cautarea adevaratei pozitii a lui x printre numerele care ar putea fi mai nici decat el
        while(k>0&&v[k]>x)//se cauta eventuala pozitie pe care va fi eventual x inserat
            k--;
        for(j=i-1;j>=k+1;j--)
            v[j+1]=v[j];
        v[k+1]=x;
        for(j=1;j<=n;j++)
            cout<<v[j]<<" ";
       cout<<endl;
    }
   // for(i=1;i<=n;i++)
     //   cout<<v[i]<<" ";
    return 0;
}
