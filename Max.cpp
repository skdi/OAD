#include <iostream>
#include <fstream>

using namespace std;


int main(){
    ifstream archivo;
    string *s,*size;int i=0;

    archivo.open("D:\archivo.txt");
    //while para almacenar los datos en el string y guardar sus tamaños
    while(archivo!=EOF){
        archivo>>s[i];
        size[i]=s[i].length();
        i++;
    }
    //while para el numero mayor
    while(i<size->size()){
        if(size[i]>size[i+1])
            size[i+1]=0;
        i++;
    }
    //while para imprimir el string mas largo
    while(i<size->size()){
        if(size[i]!=0)
            cout<<s[i];
        i++;
    }
    
    
    archivo.close();

}
