#include <iostream>
//#include <string>
#include <math.h>
using namespace std;
int suma(){
    //int k=INT_MAX-2000;
    int k=0;
    int a=0;
    try{
        while(true){
            cout<<"ingrese un numero: ";
            cin>>a;
            if(a>=-100 && a<=100){
                k=k+pow(a,2);
                cout<<"suma actual : "<<k<<endl;}
            else throw true;
            if(INT_MAX-k<1000)//si esta a punto de desbordar
                throw 125;
        }
    }catch(bool){
            cout<<"error , el numero no esta definido en el intervalo "<<endl;}
     catch(int a){
        cout<<a<<" : esta por desbordar"<<endl;
        cout<<"suma actual :"<<k<<endl;
            }
    return k;

}

//ejercicio1
int main()
{
    cout<<suma();
    return 0;
}/*
int leerArchivo(int v[]){
    char *n;int cod;FILE *p;
    cod=lee
}*/
