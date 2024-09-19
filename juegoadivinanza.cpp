#include <iostream>
using namespace std;

int main(){
cout<<"**********************************";
cout<<" Bienvenido al Juego de la Adivinanza!";
cout<<"**********************************"<<endl;

const int numero_secreto = 42;
int adivina;
bool acerto  =  adivina = numero_secreto;
bool mayor = adivina > numero_secreto;

cout<<"Dime un número: ";
cin>>adivina;
if(acerto){
	cout<<"La paraste de pecho!!1!"<<endl;
	}
else if(mayor){
	cout<<"Muy alto, sonso"<<endl;
	}
else{
	cout<<"Muy bajo, choco"<<endl;
	}

}
