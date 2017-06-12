#ifndef HASH_H
#define HASH_H
#include <iostream>
using namespace std;

const int TABLE_SIZE=128;
class hash{
private:
    int key;
    int value;
    hash *next;
public:
    hash(int key,int value);
    int getkey(){return key;}
    int get_value(){return value;}
    void set_value(int value){this->value=value;}
    hash *getnext(){return next;}
    void set_next(hash* next){this->next=next;}
};

class hashmap{
private:
    hash **table;
public:
    hashmap(){
        table=new hash*[TABLE_SIZE];
        for(int i=0;i<TABLE_SIZE;i++)
            table[i]=NULL;
    }
    int get(int key){
        int hash1=(key%TABLE_SIZE);
        if(table[hash1]==NULL){
            return -1;
        }
        else{
            hash *entry=table[hash1];
            while(entry!=NULL && entry->getkey()!=key)
                entry=entry->getnext();
            if(entry==NULL)
                return -1;
            else return entry->get_value();
        }
    }
    void put(int key,int value);
    void remove(int key);
    ~hashmap(){
        for(int i=0;i<TABLE_SIZE;i++)
            if(table[i]!=NULL){
                hash *prev=NULL;
                hash *entry=table[i];
                while(entry!=NULL){
                    prev=entry;
                    entry=entry->getnext();
                    delete prev;
                }
            }
        delete[] table;
    }

};








#endif // HASH_H


#include "hash.h"

hash::hash(int key, int value){
    this->key=key;
    this->value=value;
    this->next=NULL;

}

void hashmap::put(int key, int value){
    int hash1=key%TABLE_SIZE;
    if(table[hash1]==NULL){
        table[hash1]=new hash(key,value);
        return;
    }else
        table[hash1]->set_next(new hash(key,value));

}


void hashmap::remove(int key){
    int hash1=key%TABLE_SIZE;
    hash *mihash=table[hash1];
    if(mihash==NULL){
        cout<<"vacio"<<endl;
        return;
    }else{
        while(mihash->getnext()!=NULL){
            if(mihash->getkey()==key){
                hash *temp=mihash;//guardo la posicion anterior
                mihash=mihash->getnext();//poisicion actual
                hash *temp2=mihash->getnext();//posicion sig
                temp->set_next(temp2);
                delete mihash;
            }
            mihash=mihash->getnext();
        }
    }


}




#include <iostream>
#include "hash.h"

using namespace std;

int main()
{
    hashmap* mimap=new hashmap();
    mimap->put(3,2);
    mimap->put(3,5);
    mimap->put(141,6);
    return 0;
}






































