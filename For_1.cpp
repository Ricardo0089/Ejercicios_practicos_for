/*Realizar el ejercicio con for en base a el diaggrama de flujo dado en clase*/
#include <iostream>
using namespace std;

int main () {

//planteamos la variable de numeros enteros
int n=0;

//Pedimos que ingrese el numero y lo guardamos en la variable
cout<<"Ingrese un numero"<<endl;
cin>>n;


for(int i=2; i<n; i+=2){
    cout<<"Numero: "<<i<<endl;
}




    return 0;
}