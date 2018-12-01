#include<iostream>
#include<math.h>

using namespace std;

int kali(int m, int n)
{
    int i, hasil=0;
    for (i=1; i<=(n);i++)
        hasil +=m;
    if (n<0) return(-hasil); else return(hasil);
}
main()
{
    int a,b;
    cout<<"\nMasukan Bilangan : ";
    cin >>a;
    cout<<"\nDikalikan dengan Bilangan : ";
    cin >>b;
    cout<< "\nNilai " << a << " X " << b <<" = " << kali(a,b);
    return 0;
}
