//empezemos :V
/////////////////////////////////////////////////////////////////////////////////////////
//Header
/////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <math.h>
#include <string.h>
using namespace std;

class cripto{
  private:
    int clave=0;
    string mensaje="";
  public:
    string alfabeto="abcdefghijklmnopqrstuvwxyz ";
    cripto(int clave);//genera clave
    string codifica(string mensaje);
    string decodifica(string mensaje);
    void setclave();
    int getclave();
    
}
