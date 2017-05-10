//https://drive.google.com/drive/folders/0B3PCb9zwHKQkRXFZUWFydFlQeEk

#include <iostream>
#include <vector>

using namespace std;



bool particionable(vector<int> v){
    int temp=0;
    for(int i=0;i<v.size();i++){
        temp+=v[i];//sumo los valores de mi vector en temp
    }
    if(temp%2==0)//solo si es par puede particionarse el vector para obtener
        return true;//una suma igual en ambas partes de los vectores resultantes
    else return false;
}






int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(6);
    cout<<particionable(a);
}
