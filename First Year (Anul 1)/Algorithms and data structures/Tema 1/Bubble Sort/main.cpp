#include <iostream>

using namespace std;
int n,m,nn,i,v[1001],ok;
int main()
{
    cin>>n;//citirea numarului de elemente din sir
    for(i=1; i<=n; i++)
        cin>>v[i];//citirea elementelor din sir
    nn=n;//nn va deveni copia lui n
    do
    {
        ok=1;//contorul care indica daca sirul este ordonat sau nu(ok ia valoarea 1 de fiecare data deoarece se presupune ca sirul este ordonat)
        for(i=1; i<nn; i++)//parcurgerea elementelor din vector care prin if va determina o eventuala neregula in ordinea acestora
            if(v[i]>v[i+1])//compararea celor 2 elemente de pe pozitii consecutive din vector
            {
                swap(v[i],v[i+1]);//schimbarea valorilor intre v[i] si v[i+1]
                ok=0;//deoarece sirul nu este ordonat, contorul devine 0
                m=i;//se retine locul unde a avut loc ultima interschimbare, care va indica implicit pozitia de la care vectorul este ordonat
            }
        nn=m;//Elementele din vector de la pozitia m spre dreapta sunt deja sortate deoarece mai e nevoie de vreo schimbare

        for(i=1;i<=n;i++)
            cout<<v[i]<<" ";//afisarea dupa fiecare set de instructiuni
        cout<<endl;
    }while(!ok);

    return 0;
}
