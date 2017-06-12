#include "linkedlist.h"


listae::listae(){
    head=new nodo();
    head->dato=0;
    head->next=NULL;
    n=1;
}


void listae::insert(int index, int value){
    nodo *temp=new nodo(value);
    nodo *sig=new nodo();
    int cont=0;
    if(index>=0 && index<n){
        if(isEmpty())
            head->dato=value;
        else{
            while(cont<=index){//recorrido hasta la posicion solicitada
                head=head->next;
                cont++;
            }
            sig=head->next;//guardo la sig posicion
            head->next=temp;//apunto head al nodo nuevo
            temp->next=sig;//apunto el nodo nuevo a la sig posicion
            n++;
    }
    }
    else return;

}

bool listae::isEmpty() const{
    if(head->next==NULL)
        return 1;
}


int listae::size() const{
    int cont=1;
    nodo *temp=new nodo();
    temp=head;
    while(temp->next!=NULL){
        cont++;
        temp=temp->next;
    }
    return cont;

}

int listae::contar_duplicados(){
    int cont=0;//inicializo mi contador
    nodo *temp=new nodo();
    temp=head;
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
    while(head->next!=NULL){
        temp->dato=head->dato;//duplico el dato
        temp2=head->next;//guardo la sig posicion de head
        head->next=temp;//apunto head a mi dato duplicado
        temp->next=temp2;//apunto mi duplicado a la sig direccion de head
        head=head->next->next;//actualizo posicion saltandome un espacio(del duplicado)
    }
    n*=2;
    return head;

}

nodo *listae::sort(){
    nodo *temp=new nodo();
    while(head->next!=NULL){
        temp=head->next;//guardo la siguiente posicion
        if((head->dato>temp->dato)&& head->dato<0){//comparo si mi posicion es menor que la sig
            swap(head,temp);//y ademas es negativa entonce intercambio valores
        }
        head=head->next;
    }
    return head;

}

void listae::swap(nodo *a, nodo *b){
    nodo *temp=new nodo();
    temp->dato=a->dato;
    a->dato=b->dato;
    b->dato=temp->dato;
}

void listae::imprimir() const{
    nodo *temp=new nodo();
    temp=head;
    while(temp->next!=NULL){
        cout<<temp->dato<<"\t";
        temp=temp->next;
    }
    cout<<endl;

}









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







