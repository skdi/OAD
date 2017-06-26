/*tarea hacerlo con templates y ponerle destructor >:v */
#include <iostream>
#include "arbolb.h"

using namespace std;

int main()
{
    arbolb *tree=new arbolb();
    tree->insert(1);
    tree->insert(5);
    tree->insert(3);
    tree->insert(3);
    tree->insert(3);
    tree->insert(3);
    tree->insert(3);
    tree->insert(3);
    tree->insert(7);
    cout<<"altura prro: " <<tree->altura()<<endl;
    tree->indorder(tree->getroot());
   // tree->imprimir();
    cout << "Hello World!" << endl;
    return 0;
}
#include "arbolb.h"


template <typename T>
bool arbolb::insert(T valor){
    node **n;
    if(find(n,valor))
        return false;
    *n=new node(valor);
    return true;
}
template <typename T>
bool arbolb::find(node<T> **&n, T value){
    n=&root;
    while((*n)){
        if((*n)->value==value){
            return true;
        }
        n=&(*n)->child[(*n)->value<value];
        return false;
    }

}
template <typename T>
int arbolb::altura(){
    node<T> *temp=root->child[0];
    node<T> *temp2=root->child[1];
    int contador=0;
    int contador2=0;
    while(temp->child[0]!=NULL || temp2->child[1]!=NULL){
        //recorrido hacia la izquierda
        if(temp->child[0]!=NULL){
            contador++;
            temp=temp->child[0];
        }
        //recorrido hacia la derecha
        else if(temp2->child[1]!=NULL){
            contador2++;
            temp2=temp2->child[1];
        }
    }
    if(contador>contador2)
        return contador;
    else return contador2;
}
template <typename T>
void arbolb::imprimir(){
    queue<node *> q;
    q.push(root);
    while(!q.empty()){
        node *n=q.front();
        q.pop();
        cout<<n->value<<endl;
        if(n->child[0])
            q.push(n->child[0]);
        if(n->child[1])
            q.push(n->child[1]);
    }

}
template <typename T>
void arbolb::indorder(node<T> *root){
    if(root==NULL)
        return;
    else{
        cout<<root->value<<endl;
        if(root->child[0])
            indorder(root->child[0]);
        if(root->child[1])
            indorder(root->child[1]);
}

}


template <typename T>
bool arbolb::find(T value){
   node **n;
   return find(n,value);

}
#ifndef ARBOLB_H
#define ARBOLB_H
#include <iostream>
#include <queue>

using namespace std;

template <typename T>
struct node{
    T value;
    node *child[2];
    node(){
        value=0;
        child[0]=child[1]=NULL;
    }
    node(int valor){
        value=valor;
        child[0]=child[1]=NULL;
    }
};
template <typename T>
class arbolb{
private:
    node<T> *root;
public:
    arbolb(){root=NULL;}
    bool insert(T valor);
    void eliminar();
    int altura();
    void imprimir();
    void indorder(node<T> *root);
    node<T> *getroot(){return root;}
    bool find(T value);
    bool find(node<T> **&n, T value);
};

#endif // ARBOLB_H

