#include <iostream>
#include <stdlib.h>


using namespace std;

struct nodo{
    int valor;
    nodo *next;

};



int suma(nodo *lista){
    int resultado=0;
    if(lista!=NULL){
        resultado+=lista->valor+suma(lista->next);
    }
    else return resultado;
}

nodo *create(int n){
    if(!n) return 0;
    nodo *c=new nodo();
    c->valor=n;
    c->next=create(n-1);
    return c;
}




nodo* ultimo(nodo *lista){
    if(lista==NULL)
        cout<<"lista vacia"<<endl;
    nodo *resultado=new nodo();
    if(lista->next->next!=NULL)
        resultado=ultimo(lista->next);
    else return resultado;

}

void concatena(nodo *a,nodo*b){
    while(a->next!=NULL){
        a=a->next;
    }
    a->next=b;

}

void imprime(nodo *lista){
    if(lista->next!=NULL){
        cout<<lista->valor;
        imprime(lista->next);
    }
}



int main()
{

    nodo *a=new nodo();
    nodo *b=new nodo();
    nodo *result=new nodo();
    result->next=a;
    a->next=b;
    a->valor=3;
    b->valor=4;
    result->valor=2;
    cout<<suma(result)<<endl;
    ///////////////////////////////////
    imprime(result);

    return 0;
}


























