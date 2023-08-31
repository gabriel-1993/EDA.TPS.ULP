#include <iostream>
using namespace std;
// GUARDAR EN EL ARREGLO LOS ENTEROS QUE EL USUARIO INTRODUCE 
int main(){
int miArreglo[5];
int n,opc,i,sum;

do{cout<<"1 para llenar el array"<<endl;
   cout<<"2 para mostrar el array"<<endl;
   cout<<"3 para sumar todos los elementos"<<endl;
   cout<<"4 para ver el max de otroArray fuera del switch"<<endl;
   cout<<"Datos otroArreglo[] = {5, 2, 9, 3, 7}"<<endl;
	
cin >> opc;
switch(opc){
	case 1:for( i =0; i<5;i++){
	cout << "Ingrese un numero entero por favor"<<endl;
	cin >> n;
	miArreglo[i]=n;};
	break;
	case 2:
	//MOSTRAR TODO EL CONTENIDO DE UN ARREGLO
	for( i =0; i<5;i++){
	cout <<  miArreglo[i] <<endl;
	};
	break;
	case 3:
	//SUMAR TODOS LOS VALORES DEL ARREGLO
 	sum=0;
 	for(i=0;i<5;i++){
  	sum=sum+miArreglo[i];
	};
	cout << "La suma de todos los valores del arreglo es = "<< sum <<endl;
	break; 
	}		

}while(opc>0 && opc<4);

cout << "Ejercicio 4 "<<endl;
   int otroArreglo[] = {5, 2, 9, 3, 7};
    int tamano = sizeof(otroArreglo) / sizeof(otroArreglo[0]); //Obtener el tamaño del arreglo

    int maximo = otroArreglo[0]; 
    for (int i = 1; i < tamano; i++) {
        if (otroArreglo[i] > maximo) {
            maximo = otroArreglo[i]; // Actualizar el máximo si se encuentra un elemento mayor
        }
    }
cout <<" EL valor max del arreglo es : "<<maximo<<endl;

}
