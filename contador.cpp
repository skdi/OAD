#include <iostream>
#include <map>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    map<int,int> m;
    string s;
    string narchivo="english_words.txt";
    ifstream archivo;
    archivo.open(narchivo.c_str());
    if(!archivo.fail()){
        while(archivo>>s){ // Mientras se lean líneas,
            m[s.size()]++;
        }
        archivo.close();
    }

}


//https://drive.google.com/drive/folders/0B3PCb9zwHKQkRXFZUWFydFlQeEk




