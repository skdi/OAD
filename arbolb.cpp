/*tarea hacerlo con templates y ponerle destructor >:v */


#include "arbolb.h"



bool arbolb::insert(int valor){
    node **n;
    if(find(n,valor))
        return false;
    *n=new node(valor);
    return true;
}

bool arbolb::find(node **& n,int value){
    n=&root;
    while((*n)){
        if((*n)->value==value){
            return true;
        }
        n=&(*n)->child[(*n)->value<value];
        return false;
    }

}

void arbolb::imprimir(node *root){
    if(root){
        cout<<root->value<<endl;
        if(root->child[0]){
            imprimir(root->child[0]);

        }
        if(root->child[1]){
            imprimir(root->child[1]);

        }
}
    else return;
}



bool arbolb::find(int value){
   node **n;
   return find(n,value);

}



#ifndef ARBOLB_H
#define ARBOLB_H
#include <iostream>

using namespace std;

struct node{
    int value;
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

class arbolb{
private:
    node *root;
public:
    arbolb(){root=NULL;}
    bool insert(int valor);
    void eliminar();
    void imprimir(node *root);
    node *getroot(){return root;}
    bool find(int value);
    bool find(node **&n, int value);
};

#endif // ARBOLB_H
#include <iostream>
#include "arbolb.h"

using namespace std;

int main()
{
    arbolb *tree=new arbolb();
    tree->insert(1);
    tree->insert(5);
    tree->insert(3);
    tree->insert(7);
    tree->imprimir(tree->getroot());
    cout << "Hello World!" << endl;
    return 0;
}

