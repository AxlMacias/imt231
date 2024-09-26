#include <iostream>
using namespace std;

int main(){
cout<<"**********************************";
cout<<" Bienvenido al Juego de la Adivinanza!";
cout<<"**********************************"<<endl;

int numero_secreto=42, adivina;
cout<<"Cuál es el número? ";
cin>>adivina;
cout<<"El valor de su número es: "<<adivina<<endl;

if(adivina==numero_secreto){
	cout<<"Felicitaciones!!! Adivinaste el número secreto!"<<endl;
}
else if(adivina>numero_secreto){
	cout<<"El número ingresado es mayor que el número secreto"<<endl;
	}
else{
	cout<<"El número ingresado es menor que el número secreto"<<endl;
}

}
