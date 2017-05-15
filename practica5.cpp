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

nodo *concatena(nodo *a,nodo*b){
    while(a!=NULL){
        a=a->next;
    }
    a->next=b;
    return a;
}

void imprime(nodo *lista){
    int temp[10];
    int i=0;
    while(lista!=NULL){
        temp[i]=lista->valor;
        lista=lista->next;
        i++;
    }
    while(i>0){
        cout<<temp[i];
        i--;
    }


}
void imprimir(nodo *lista){

    nodo *i=new nodo();
    for(i=lista;i!=NULL;i=i->next)
        cout<<i->valor;

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
    imprimir(result);

    return 0;
}


























