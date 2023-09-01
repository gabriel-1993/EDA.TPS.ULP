//libreria obligatoria 
#include <iostream>
// (chau std::cout, std:: cin ,etc)
using namespace std;
//para capturar una tecla por teclada con solo ser presionada (getch())
#include <conio.h>
//librerias para generar num Aleatorio
#include <cstdlib>
#include <ctime>


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



/*------------------------------------------ P A R T E     B  ------------------------------------------*/


/*Parte B: MATRICES: ¿Qué es una Matriz o Tabla? Una matriz es un vector de vectores o un también
llamado array bidimensional. La manera de declarar una matriz es C++ es similar a un vector*/

/*Ejercicio 1: Hacer un array bidimensional 3x3, ingresar datos en él, mostrarla y luego mostrar la
traspuesta. La traspuesta de una matriz se consigue intercambiando filas por columnas y viceversa.*/ 
void ejercicio1b(){
	
	int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<"Matriz original"<<endl;
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			cout << matriz[i][j]<<" ";
		}		
		cout<<""<<endl;
	}
	cout<<"Matriz traspuesta"<<endl;
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			cout<< matriz[j][i]<<" ";
		}		
		cout<<""<<endl;
	}
}

/*
/*Ejercicio 2: Realiza un programa que defina una matriz de NxN y escriba un ciclo para que muestre
la diagonal principal de la matriz. El número N es un valor válido entre 3 a 7.*/

void ejercicio2b(){
	int n=0;
	do{
		cout<<"Ingrese  un Numero para el tamaño de la matriz( N x N)"<<endl;
		cin>> n;
		}while(n<3 || n>7);
	int matriz[n][n]={};
	//llenar matriz y mostrar
	cout<<"Matriz completa "<<endl;
	int valor=1;
	for(int i=0; i<n;i++){
		for(int j=0;j<n;j++){
			matriz[i][j]=valor;
			valor++;
				//agrego condicion para los n de 1 cifra, para mostrarlos ordenados
				if(valor<10){
				cout<<matriz[i][j]<<"  ";
				}
				else{
				 cout<<matriz[i][j]<<" ";
				}

		}
		cout << ""<<endl;
	}
	//mostrar diagonal principal desde 0,0 hasta n,n
	cout<<"Diagonal principal de la matriz"<<endl;
	for(int i=0; i<n;i++){
		for(int j=0;j<n;j++){
				//agrego condicion para imprimir los valores unicamente de la diagonal principal
				if(i==j){
					if(matriz[i][j]<10){
						cout<<matriz[i][j]<<" ";
					}else{
						cout<<matriz[i][j];
					}
				}
				else{
					  cout<<"00"<<" ";
				}
		}
		cout << ""<<endl;
	}
}

/*Ejercicio 3: Hacer una matriz M1 de tipo entera de 2 * 2, llenarla de números y luego copiar todo el
contenido de M1 hacia otra matriz M2, sumándole 1 a cada elemento de M1 al copiarlo.*/
void ejercicio3b(){
	int m1[2][2]={{1,2},{3,4}};
	int m2[2][2];
	cout<< "matriz con 1,2,3,4 la paso a matrizB y le sumo 1 a cada elemento:"<<endl;
	for(int i=0; i<2;i++){
		for(int j=0;j<2;j++){
		m2[i][j]=m1[i][j]+1;
		cout<<m2[i][j]<<" ";
		}		
		cout<<""<<endl;
	}
}

/*Ejercicio 4: Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de
números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla.*/

void ejercicio4b(){
	int filas,columnas;
	cout<<"Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de"<<endl;
cout<<"numeros aleatorios, copiar el contenido a otra matriz y por ultimo mostrarla en pantalla."<<endl;
cout<<"ingrese el numero de filas"<<endl;
cin >>filas;
cout<<"ingrese el numero de columnas"<<endl;
cin>>columnas;

int matriz[filas][columnas]	;
// Semilla para la generación de números aleatorios
    srand(time(NULL));

    // Generar un número aleatorio entre 0 y 10
cout<<"Matriz original"<<endl;
for(int i=0;i<filas;i++){
	for(int j=0;j<columnas;j++){
		matriz[i][j]=  rand() % 11;
		cout<< matriz[i][j]<<" ";
	}
	cout<<""<<endl;
}
cout<<"Matriz Copiada"<<endl;
int matrizCopia[filas][columnas];
for(int i=0;i<filas;i++){
	for(int j=0;j<columnas;j++){
		matrizCopia[i][j]=  matriz[i][j];
		cout<< matrizCopia[i][j]<<" ";
	}
	cout<<""<<endl;
}
}

/*Realice un programa que lea una matriz de 3x3 y cree su matriz
traspuesta. La matriz traspuesta es aquella en la que la columna i era la fila i de la
matriz original.*/

void ejercicio5b(){
int matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int matriz2[3][3];

for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	matriz2[j][i]=matriz1[i][j];
	}
}	
//imprimir matriz traspuesta
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	cout<<matriz2[i][j]<<" ";
	}
	cout<<""<<endl;
}
}

//Ejercicio 6: Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.
	
void ejercicio6b(){
	cout<<"Realice un programa que calcule la suma de dos matrices cuadradas de 3x3. "<<endl;
	int matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int matriz2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	int sumador=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sumador+= matriz1[i][j] + matriz2[i][j];
		}
	}
	cout<<"la suma de todos los numeros de m1 y m2: sumador ="<< sumador;
}	

/*Ejercicio 7: Desarrollar un programa que determine si una matriz es simétrica o no. Una
matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.*/

void ejercicio7b(){
	cout<<"Si ingresa 3X3 , para esa medida hay datos definidos con el ejemplo de una matriz simetrica"<<endl;
	int filas,colum;
	do{
	cout<<"Ingrese cantidad de filas"<<endl;
	cin>>filas;
	cout<<"Ingrese cantidad columnas"<<endl;	
	cin>>colum;
	}	while(
		filas!=colum
		);
	int matriz[filas][colum];

	if(filas==3 && colum==3){
			cout<<"La matriz se va llenar con valores para un ej simetrico"<<endl;
			int 
			matriz[3][3]={{8,1,3},{1,7,4},{3,4,9}};
		
	}else{ // si es distinto de 3x3 pero es cuadrada: ingresa los num el usuario:
			cout<<"llenar matriz"<<endl;
			for(int q=0;q<filas;q++){
			for(int w=0;w<colum;w++){
		 	cout<<"ingrese un entero"<<endl;
			cin>>matriz[q][w];
			}
		}
		
	}
	cout<<" imprimo la 3.3......."<<endl;
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			cout << matriz[i][j]<<" "<<endl;
		}
	}
	bool cumple=true;
    // Verificar si la matriz es igual a su matriz transpuesta
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < colum; j++) {
        	cout << matriz[i][j]<<" ";
            if (matriz[i][j] != matriz[j][i]) {
                cumple=false;
            }
        }
    }
    if(cumple==true){
    	cout<<"LA MATRIZ ES MAGICCC"<<endl;
	}else{
		cout<<"La matriz no es simetrica"<<endl;
	}
}

/*Ejercicio 8: Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.*/

	void ejercicio8b(){
		
		int matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
		int matriz2[3][3]={{10,11,12},{13,14,15},{16,17,18}};
		int resultados[3][3];
		
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			resultados[i][j]=0;
			resultados[i][j]+= matriz1[i][j]*matriz2[i][j];
			cout<<resultados[i][j]<<" ";
			}
		cout<<""<<endl;
		}
	}
	
/*Ejercicio 9: Hacer un programa en C++ que muestre en pantalla un tablero de ajedrez de la
siguiente manera:
1. - Los peones con la letra P.
2. - Las torres con la letra T.
3. - Los caballos con la letra C.
4. - Los alfiles con la letra A.
5. - El rey con la letra M.
6. - La reina con letra M.*/

void ejercicio9b(){
	char tablero[8][8]={{'T','C','A','H','M','A','C','T'},{'P','P','P','P','P','P','P','P'},{'O','O','O','O','O','O','O','O'},{'O','O','O','O','O','O','O','O'},{'O','O','O','O','O','O','O','O'},{'O','O','O','O','O','O','O','O'},{'P','P','P','P','P','P','P','P'},{'T','C','A','H','M','A','C','T'}};
	for(int i=0;i<8;i++){
		for( int j=0;j<8;j++){
			cout<< tablero[i][j]<<" ";
		}
		cout<<""<<endl;
	}
}

/*Ejercicio 10: Hacer un array bidimensional que acepte nueve números, luego, pedir al usuario que
ingrese las coordenadas (x,y) para mostrar el elemento guardado en dicha posición.*/

void ejercicio10b(){
	int vector[3][3]={{40,50,60},{70,80,90},{23,35,64}};
	int x,y;
	do{
		cout<<"Ingrese la posicion X"<<endl;
		cin>>x;
		cout<<"Ingrese la posicion Y"<<endl;
		cin>>y;
	}while(x<0 || x>2 && y<0 || y>2);
	cout << vector[x][y]<<endl;
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
	
// ------------------------------------------------ SWITCH PARTE B -------------------------------------
		int respB;
	do{	cout<<"PARTE B"<<endl;
		cout<<"Ingresar un NUM del 1 al 10 para cada consigna "<<endl;
		cout<<"11 para salir"<<endl;
		cin >> respB;
		switch (resp){
		case 1: ejercicio1b();
				break;
		case 2: ejercicio2b();
				break;
		case 3: ejercicio3b();
				break;
		case 4: ejercicio4b();
				break;
		case 5: ejercicio5b();
				break;
		case 6: ejercicio6b();
				break;
		case 7: ejercicio7b();
				break;
		case 8: ejercicio8b();
				break;
		case 9: ejercicio9b();
				break;
		case 10:ejercicio10b();
				break;																		
	}
	}while(resp!=11);
		
//ultima llave y return	
		return 0;
}