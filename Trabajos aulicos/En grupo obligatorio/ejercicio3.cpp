//Sala 5
//Gabriel Torres
//Ramiro Moran
//Joaquin Gomez Gonzalo
//Silver Mateo Cardona

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float largo, ancho, hectareas, millas, acre, m2;
	cout<<"ingrese las medidas que corresponde al largo de su terreno"<<endl;
	cin>>largo;
	cout<<"ingrese la medidas de corresponde al ancho de su terreno"<<endl;
	cin>>ancho;
	m2=largo*ancho;
	hectareas=m2/10000;
	acre=m2/4046.86;
	millas=hectareas/259;
	cout<<"hectareas: "<<hectareas<<endl;
	cout<<"acres: "<<acre<<endl;
	cout<<"millas: "<<millas;
return 0;	
}
