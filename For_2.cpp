/*Desarrollamso en base al segun diagrama de flujo entregado*/
#include <iostream>
using namespace std;

int main () {

//planteamso las varibles
  int n, primo=1, modulo;

    cout<<"Ingrese un numero"<<endl;
    cin>>n;

    for(int i=n-1; i>=2; i--){
        modulo= n%i;
        if(modulo==0){
            cout<<"No es primo";
            primo=0;
            break;

        }

        }
        if(primo==1){
            cout<<" Es primo \n";
        
    }



    return 0;
}