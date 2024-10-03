#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
cout<<"**********************************";
cout<<"Bienvenido al Juego de la Adivinanza!";
cout<<"**********************************"<<endl;

srand(time(0));
const int NUMERO_SECRETO=1+rand()%100;
cout<<"Número secreto aleatorio generado entre 1 y 100: "<<NUMERO_SECRETO<<endl;
int adivina, intentos=0;
bool no_acerto=true;
double puntos=1000.0;

while(no_acerto){
	intentos++;
	cout<<"Tentativa "<<intentos<<endl;
	cout<<"Cuál es el número? ";
	cin>>adivina;

	double puntos_perdidos=abs(adivina-NUMERO_SECRETO)/2.0;
	puntos=puntos-puntos_perdidos;

	cout<<"El valor de su número es: "<<adivina<<endl;

	bool acerto=adivina==NUMERO_SECRETO;
	bool mayor=adivina>NUMERO_SECRETO;

	if(acerto){
		cout<<"Felicitaciones!!! Adivinaste el número secreto!"<<endl;
		no_acerto=false;
	}

	else if(mayor){
		cout<<"El número ingresado es mayor que el número secreto"<<endl;
	}

	else{
		cout<<"El número ingresado es menor que el número secreto"<<endl;
	}
}
cout<<"Ganaste el juego!"<<endl;
cout<<"Adivinaste el número secreto con "<<intentos<<" intentos."<<endl;
cout.precision(2);
cout<<fixed;
cout<<"Su puntuación fue de "<<puntos<<" puntos"<<endl;

}