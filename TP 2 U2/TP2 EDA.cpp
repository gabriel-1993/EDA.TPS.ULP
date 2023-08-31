//libreria obligatoria 
#include <iostream>
// (chau std::cout, std:: cin ,etc)
using namespace std;
//para capturar una tecla por teclada con solo ser presionada (getch())
#include <conio.h>
//Linea 257 Main : Menu switch para cada ejercicio

/*Parte A Bucles: Conjunto de instrucciones que se repiten al cumplirse una condición.
Parte A: ARREGLOS - son un tipo de dato que almacena una secuencia de datos del
mismo tipo. Sus elementos se almacenan en zonas contiguas de memoria y se puede acceder a
ellos de manera directa mediante un índice o posición.



Ejercicio 1: Escribe un programa que con While, defina un vector de números y calcule la 
suma de sus elementos. Use la librería conio.h, y la función getch().*/ 
void ejercicio1() {
	
  int numeros[5];
  int sumaaa = 0;
  int i = 0;
  int num;
  while (i < 5) {
  	cout<<"Ingrese un numero de 1 digito"<<endl;
  	//le agrego -48 para asignar bien el numero ingresado
     numeros[i]=getch()-48 ;
     cout<<"posicion"<<i<<":"<<numeros[i]<<endl;
    sumaaa += numeros[i];
    cout<<"SUMA="<<sumaaa<<endl;
    i++;
  }
  cout << "La suma de los elementos del vector es: " << sumaaa << endl;
};

//Ejercicio 2: Escribe un programa usando un for, que defina un vector de números y calcule la
//multiplicación acumulada de sus elementos. Use la librería conio.h, y la función getch().

void ejercicio2() {
	
  int numeros[5];
  int multiplicacion = 1;
  int num;
  for (int i=0;i<5;i++) {
  	cout<<"Ingrese un numero de 1 digito"<<endl;
  	//le agrego -48 para asignar bien el numero ingresado
     numeros[i]=getch()-48 ;
    multiplicacion *= numeros[i];
  }
  cout << "La Multiplicacion de los elementos del vector es: " << multiplicacion << endl;
};

/*Ejercicio 3: Escribe un programa que lea de la entrada estándar un vector de números de tamaño
100, pero que cargue por teclado n números, y los muestre en la salida estándar los números del
vector con sus índices asociados.*/

void ejercicio3(){
	int cant,vector100[100];
	
	do{	cout<< "¿Cuantos numeros quiere guardar en el vector?"<<endl;
		cin>> cant;
	}	while (cant<1 || cant>100);
		for(int i=0;i<cant;i++){
			cout<<"Ingrese un numero"<<endl;
			cin>> vector100[i];	
	}
	for(int i=0;i<cant;i++){
			cout<<"Numero en el indice "<<i<<" = "<<vector100[i]<<endl;
	}
	}
	
	/*Ejercicio 4: Escribe un programa que defina un vector de números y muestre en la salida estándar
el vector en orden inverso—del último al primer elemento.*/
void ejercicio4(){
	int vector[]={10,20,30,40,50,60,70,80,90,99};
	//CALCULAR EL TAMAÑO DE UN ARRAY:
    // Calcula el tamaño total del array en bytes
    size_t tamanoTotal = sizeof(vector);
    // Calcula el tamaño de un elemento individual en bytes
    size_t tamanoElemento = sizeof(vector[0]);
    // Calcula la cantidad de elementos dividiendo el tamaño total por el tamaño de un elemento
    size_t cantidadElementos = tamanoTotal / tamanoElemento;
	for(int i=cantidadElementos-1;i>-1;--i){
		cout << "Num en el indice "<<i<<" = "<<vector[i]<<endl;
	}
}

/*Ejercicio 5: Desarrolle un programa que lea de la entrada estándar un vector de enteros y
determine el mayor elemento del vector.*/
void ejercicio5() {
    int vector[10];
    int i = 0;
    int max = 0;
    int n;

    do {
        cout << "Ingrese un valor entero. Para salir ingrese 0." <<endl;
        cin >> n;
     if(n==0){
     	break;
	 }
        vector[i] = n;
        if (i == 0 || n > max) {
            max = n; 
        }
        i++;
    } while (i < 10);
    cout << "El valor máximo del array es: " << max <<endl;
}

/*Ejercicio 6: Escribe un programa que defina un vector de números y calcule si existe algún número
en el vector cuyo valor equivale a la suma del resto de números del vector.*/
void ejercicio6(){
	int vector[]={5,10,30,45,90};
	// una forma mas rapida de obtener el tamanio del array:
    int tam = sizeof(vector) / sizeof(vector[0]);
	int sumaTotal=0;
	for(int i=0; i<tam; i++){
		sumaTotal+= vector[i];
	}   
	cout<<"suma total"<< sumaTotal<<endl; 
	for(int i=0; i<tam; i++){
		if(vector[i]== sumaTotal-vector[i]){
			cout<< "El numero = "<<vector[i]<< " en el indice "<<i<< " equivale a la suma del resto de valores en el array"<<endl;
		}
	} 
}
	
/*Ejercicio 7: Realiza un programa que defina dos vectores de caracteres y después almacene el
contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos del
primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo
vector en la salida
estándar.*/

void ejercicio7(){
	char vector1[] = {'a', 'b', 'c','d','e'};
    char vector2[] = {'f', 'g', 'h','y','j'};
    
    int tamV1 = sizeof(vector1) / sizeof(vector1[0]);
    int tamV2 = sizeof(vector2) / sizeof(vector2[0]);

    char nuevoVector[tamV1 + tamV2];

    // Copiar los elementos del primer vector al nuevo vector
    for (int i = 0; i < tamV1; ++i) {
        nuevoVector[i] = vector1[i];
    }

    // Copiar los elementos del segundo vector al nuevo vector
    for (int i = 0; i < tamV2; ++i) {
        nuevoVector[tamV1 + i] = vector2[i];
    }

    // Mostrar el contenido del nuevo vector
    cout << "Vector nuevo :" << endl;
    for (int i = 0; i < tamV1 + tamV2; ++i) {
        cout << nuevoVector[i] << " ";
        
    }
    cout<<" "<<endl;
}
	//Ejercicio 8: Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo

void ejercicio8(){
	
    int arreglo1[5];
    int arreglo2[5];
    
    cout << "Ingrese 5 números:" <<endl;
    for (int i = 0; i < 5; ++i) {
        cin >> arreglo1[i];
		
    }

    for (int i = 0; i < 5; ++i) {
        arreglo2[i] = arreglo1[i];
    }

	//imprimir
    cout << "El contenido del segundo arreglo es:" <<endl;
    for (int i = 0; i < 5; ++i) {
    cout << arreglo2[i] << " ";
    }    
    cout << " "<<endl;
}

/*Ejercicio 9: Se tiene el vector A con 100 elementos almacenados. Diseñe un algoritmo que escriba SI, si
el vector esta ordenado ascendentemente, o NO si el vector no está ordenado*/
void ejercicio9(){
int ordenado[100];
int n=1;
//lleno un vector del 1 al 100 de forma ordenada:
for(int i=0;i<100;i++){
	
	ordenado[i]=n;
	n++;
	cout << "indice "<<i<<" = "<<ordenado[i]<<endl;
	
}
//verifico si el orden es ascendentemente mas alla del numero que empieze que 
bool cumple=false;
for(int i=0;i<100;i++){
	int n1= ordenado[0];
	
	if( i>0){
		if(ordenado[i]==n1+1){
			n1++;
			cumple=true;
		}else{
			i=100;
		}
	}
}
// luego de comparar en todas las iteraciones o que corte por el else...
	if(cumple==true){
		cout<<" EL ARRAY ESTA EN ORDEN"<<endl;
	}else{
	cout<<"El array NO esta de menor a mayor"<<endl;
	}
}

/*Ejercicio 10: Dado un arreglo V de tamaño 20 con números enteros. Deje en un vector A todos los
números negativos y en un vector B el doble de los positivos.*/

void ejercicio10(){
	int vecOriginal[20]={-10,20,-30,-40,50,-60,-70,-80,90,100,15,25,35,-45,-55,65,75,-85,95,-99};
	int vecA[10]={};
	int vecB[10]={};
	int a=0, b=0 ;
	
	for(int i=0;i<20;i++){
		if(vecOriginal[i] <0){
			vecA[a]=vecOriginal[i];
			a++;
		}else{	
			vecB[b]=vecOriginal[i]*2;
			b++;
			}
}

	cout<<"Todos los numeros en el vector original"<<endl;
	for(int i=0;i<20;i++){
		cout <<"Indice: "<<i<< " = "<< vecOriginal[i]<<endl;
	}
	cout<<"VEC A numeros negativos"<<endl;
	for(int i=0;i<10;i++){
		cout <<"Indice: "<<i<< " = "<< vecA[i]<<endl;
	}
	cout<<"VEC B numeros positivos multiplicados por 2"<<endl;
	for(int i=0;i<10;i++){
		cout <<"Indice: "<<i<< " = "<< vecB[i]<<endl;
	}
	
}



int main(){
		int resp;
	do{	cout<<"PARTE A"<<endl;
		cout<<"Ingresar un NUM del 1 al 10 para cada consigna "<<endl;
		cout<<"11 para salir"<<endl;
		cin >> resp;
		switch (resp){
		case 1: ejercicio1();
				break;
		case 2: ejercicio2();
				break;
		case 3: ejercicio3();
				break;
		case 4: ejercicio4();
				break;
		case 5: ejercicio5();
				break;
		case 6: ejercicio6();
				break;
		case 7: ejercicio7();
				break;
		case 8: ejercicio8();
				break;
		case 9: ejercicio9();
				break;
		case 10:ejercicio10();
				break;																		
	}
		
	}while(resp!=11);

//ultima llave y return
	return 0;


}
   







