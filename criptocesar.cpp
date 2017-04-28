#ifndef CRIPTO_H
#define CRIPTO_H

#include <stdio.h>
#include <math.h>
#include <cctype>
#include <string>

using namespace std;

class cripto{
  private:
    int clave;
  public:
    string alfabeto="abcdefghijklmnopqrstuvwxyz ";
    cripto(int clave1);
    cripto();
    bool validarclave(int clave1);
    bool validarmensaje(string mensaje);
    string codifica(string mensaje);
    string decodifica(string mensaje);
    void setclave(int clave1);
    int getclave();
};



#endif // CRIPTO_H

///////////////////////////////////////////////////////////////////////////
#include "cripto.h"

cripto::cripto(int clave1){
    setclave(clave1);
}
cripto::cripto(){
}
bool cripto::validarclave(int clave){
  if(clave>=1)
    return true;
  else return false;
}
bool cripto::validarmensaje(string mensaje){
  if(mensaje.length()<1)
    return false;
  else return true;
}
void cripto::setclave(int clave1){
  if(validarclave(clave1))
    this->clave=clave1;
}
int cripto::getclave(){
  return this->clave;
}

string cripto::codifica(string mensaje){
    string temp=mensaje;
    for(unsigned int i=0;i<mensaje.length();i++){
        temp[i]+=clave%alfabeto.length();
    }
    return temp;
}

string cripto::decodifica(string mensaje){
    string temp=mensaje;
    for(unsigned int i=0;i<mensaje.length();i++){
        temp[i]-=clave%alfabeto.length();
    }
    return temp;
}


///////////////////////////////
#include "cripto.h"
#include <iostream>
using namespace std;

int main(){

  cripto *emisor=new cripto(3);
  string mensaje="hola como va todo";
  cout<<mensaje<<endl;
  string mensajecifrado=emisor->codifica(mensaje);
  cout<<mensajecifrado<<endl;
  cripto *receptor=new cripto(3);
  string mensajeplano=receptor->decodifica(mensajecifrado);
  cout<<mensajeplano<<endl;
  return 0;

//lztfuentespzARROBAgmail.com asunto: EDIII-labP1
}
