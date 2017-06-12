#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>

using namespace std;

struct nodo{
    int dato;
    nodo *next;
    nodo(){
        this->dato=0;
        this->next=NULL;
    }

    nodo(int dat){
        this->dato=dat;
        this->next=NULL;
    }
    /*nodo(int dat,nodo* sig){
        this->dato=dat;
        this->next=sig;
    }*/
};


class listae{
private:
    nodo* head;
    int n;
public:
    listae();
    void add(int value);
    void insert(int index,int value);
    bool isEmpty() const;
    void remove(int index);
    int size() const;
    int contar_duplicados();
    nodo *sluter();
    nodo *sort();
    void swap(nodo* a,nodo* b);
    void imprimir() const;


};

#endif // LINKEDLIST_H
#include "linkedlist.h"


listae::listae(){
    this->head=new nodo();
    this->head->dato=0;
    this->head->next=NULL;
    this->n=1;
}


void listae::insert(int index, int value){
    nodo *temp=new nodo(value);
    nodo *sig;
    int cont=0;
    if(index>=0 && index<n){
        if(isEmpty())
            this->head->dato=value;
        else{
            while(cont<=index){//recorrido hasta la posicion solicitada
                this->head=this->head->next;
                cont++;
            }
            sig=this->head->next;//guardo la sig posicion
            this->head->next=temp;//apunto head al nodo nuevo
            temp->next=sig;//apunto el nodo nuevo a la sig posicion
            this->n++;
    }
    }
    else return;

}

bool listae::isEmpty() const{
    if(this->head->next==NULL)
        return 1;
}


int listae::size() const{
    int cont=1;
    nodo *temp=new nodo();
    temp=this->head;
    while(temp->next!=NULL){
        cont++;
        temp=temp->next;
    }
    return cont;

}

int listae::contar_duplicados(){
    int cont=0;//inicializo mi contador
    nodo *temp=new nodo();
    temp=this->head;
    while(temp->next!=NULL){//ciclo while mientras no este vacia mi lista
        if(temp->dato==temp->next->dato)//si mi primera posicion es
            cont++;//igual a la segunda , entonce sumo contador
        temp=temp->next;//si no salta y actualiza posicion
    }
    return cont;//retorno el numero de duplicados
}

nodo* listae::sluter(){
    nodo *temp=new nodo();
    nodo *temp2=new nodo();
    while(this->head->next!=NULL){
        temp->dato=this->head->dato;//duplico el dato
        temp2=this->head->next;//guardo la sig posicion de head
        this->head->next=temp;//apunto head a mi dato duplicado
        temp->next=temp2;//apunto mi duplicado a la sig direccion de head
        this->head=this->head->next->next;//actualizo posicion saltandome un espacio(del duplicado)
    }
    n*=2;
    return this->head;

}

nodo *listae::sort(){
    nodo *temp=new nodo();
    while(this->head->next!=NULL){
        temp=this->head->next;//guardo la siguiente posicion
        if(this->head->dato<0){//comparo si mi posicion es negativa
            swap(this->head,temp);//y ademas es negativa entonce intercambio valores
        }
        this->head=this->head->next;
    }
    return this->head;

}

void listae::swap(nodo *a, nodo *b){
    nodo *temp=new nodo();
    temp->dato=a->dato;
    a->dato=b->dato;
    b->dato=temp->dato;
}

void listae::imprimir() const{
    nodo *temp=new nodo();
    cout<<this->head->dato<<endl;
    temp=this->head->next;
    cout<<temp->dato<<endl;
    while(temp->next!=NULL){
        cout<<temp->dato<<"\t";
        temp=temp->next;
    }
    cout<<endl;

}



#include <iostream>
#include "linkedlist.h"

using namespace std;


int main(){
    listae *lista=new listae();

    lista->insert(0,4);
    lista->insert(1,-5);
    lista->insert(2,4);
    lista->insert(3,-1);
    lista->imprimir();
    lista->sluter();
    lista->imprimir();
    lista->sort();
    lista->imprimir();
    cout<<"duplicados: "<<lista->contar_duplicados()<<endl;


    cout << "Hello World!" << endl;
    return 0;
}






