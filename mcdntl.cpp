#include <iostream>
#include <NTL/ZZ.h>

NTL_CLIENT

using namespace std;
using namespace NTL;


ZZ mcd(ZZ m, ZZ n)
{
    ZZ r,q;
    //if(m<n)
       // swap(m,n);

    while(r!=0)
    {
        q=m/n;
        r=m-q*n;//funcion para el "modulo" m,n
        m=n;//reasigno las variablescout << c << "\n";
        n=r;
    }
    return(m);/*m es el ultimo resto no nulo*/
}



int main()
{
    cout<<mcd(100,2000000);


    return 0;
}

