#include <iostream>
#include <map>
#include <fstream>
#include <string>
using namespace std;

int contarWords(string);

int main()
{
    string s;
    map<int, int> m;
    ifstream archivo("english_words.txt");
    if(!archivo.is_open())
    {
        cout<<"Imposible abrir el archivo de texto text.txt\n";
        return 0;
    }
    while(archivo>>s){ // Mientras se lean líneas,
        m[s.size()]++;
    while(archivo.is_open()){
        cout<<m[i];
        i++;}
    return 0;
}
//https://drive.google.com/drive/folders/0B3PCb9zwHKQkRXFZUWFydFlQeEk




