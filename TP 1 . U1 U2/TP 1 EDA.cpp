#include <iostream>
#include <iomanip>
#include <cmath>
//para printf y scanf
#include <cstdio>
using namespace std;

int main(){

/*------------------------------------------------------------------------------------------    Ejercicio  1

A) Haga un programa que permita la entrada de datos, ingresando el nombre y apellido del
usuario, además debe mostrar el nombre_completo por pantalla. (considera los espacios)
B) Ejemplifique, como se coloca un comentario de una o varias líneas.
C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas.
Puntos A B y C : declaro string de 14 letras mas 1 extra
 para el simbolo predeterminado	*/
 
char nombre[15], apellido[15];

//imprimir en pantalla 
cout<<"--------------------------          ejercicio 1  -----------------------------\n";
cout << "Ingrese su nombre : \n" ;
//asigno a la variable nombre el dato ingresado por teclado
cin >> nombre;	

//se repite lo anterior para el apellido
cout << "Ingrese su apellido :" <<endl;
cin >> apellido;

//muestro nombre completo e imprimo otra linea debajo 
// otra opcion para bajar podria ser la de la linea 18
cout <<"Hola "<<nombre <<" "<<apellido <<" "<<"paso abajo con endl"<< endl;
cout <<" segui con el practico.. paso abajo   \n" ;


//-------------------------------------------------------------------------------------------   Ejercicio  2	
/*  Escribe un programa que lea de la entrada estándar el precio de un producto y muestre
    en la salida estándar el precio del producto al aplicarle el IVA.*/
	
	cout<<"--------------------------------    ejercicio 2    ------------------------------\n";

	double precio,iva;
	cout << "Ingrese el precio del producto(se agregara 16% de IVA)\n";
	cin >> precio;
	iva= precio * 0.16 ;
	precio+=iva;
	cout << "Precio final con iva = " << precio <<"\n";
	
	
/*--------------------------------------------------------------------------------------------- Ejercicio 3
	
	Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
	Edad: dato de tipo entero. Sexo: dato de tipo carácter. Altura en metros: dato de tipo real. Tras
	leer los datos, el programa debe mostrarlos en la salida estándar.*/
	
	cout<<"-----------------------------        ejercicio 3.A     -----------------------------\n";

	int edad;
	char sexo[2];
	double altura;
	
	cout << "Ingrese su edad \n";
	cin >> edad;
	cout << "Ingrese la inicial de su genero m/f \n";
	cin >>sexo;
	cout << "Ingrese su altura (Ej 1.71)\n";
	cin >> altura;
	cout << "Datos ingresados-> EDAD: "<< edad << " SEXO: " << sexo << " ALTURA: "<< altura <<"\n";

	
/*--------------------------------------------------------------------------------------------- Ejercicio 3.B

	Ejecute el programa del ejercicio anterior con entradas erróneas y observe los
	resultados. Por ejemplo, introduzca un dato de tipo carácter cuando se espera un dato de tipo
	entero. */
	/*
	cout<<"ejercicio 3.B ingresar mal los datos \n";
	
	cout << "Ingrese su edad \n";
	cin >> edad;
	cout << "Ingrese la inicial de su genero m/f \n";
	cin >>sexo;
	cout << "Ingrese su altura (Ej 1.71)";
	cin >> altura;
	cout << "Datos ingresados-> EDAD: "<< edad << " SEXO: " << sexo << " ALTURA: "<< altura <<"\n";
	*/
	
	/* ----------------------------------------------------------------------------------------------  Ejercicio 4
	
	/*Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos, y su salida será el monto convertido a dólares.
	 Tome la cotización actual de dólar blue, redondear a 2 cifras.*/
	 cout << "-------------------------------     Ejercicio 4   ---------------------------" << endl;
	 int pesos ;
	 double dolares;
	printf("Ingrese la cantidad de pesos a convertir \n");
	cin >> pesos;
	dolares= pesos*760;

	cout << "Los pesos ingresados equivalen en dolares a "<<setprecision(3)<< dolares<<endl;
    
	 
	
	
	
/*----------------------------------------------------------------------------------------------------- Ejercicio 5
Ejercicio 5: Escriba un fragmento de programa que intercambie (swap) los valores de 3 variables. */  
	cout << "-----------------------------------  ejercicio 5     -------------------------------" << endl;
     int n1 = 55;
     int n2 = 76;
     int n3=66;

    cout << "Antes de aplicar SWAP : N1 = " << n1 << ", N2 = " << n2 <<", N3 = "<<n3 << endl;
	
    swap(n1, n2);
    swap(n2,n3);

    cout << "Después de aplicar SWAP : N1 = " << n1 << ", N2 = " << n2 <<", N3 = "<<n3<< endl;

		
/*---------------------------------------------------------------------------------------  Ejercicio 6   A y B
Ejercicio 6.1: Haga un programa en donde se ingresará una cantidad X de segundos, para luego convertir a horas, minutos y segundos.*/
	
    cout << "------------------------------------------    ejercicio 6.1  -------------------------------" << endl;

     int horas, minutos, segundos; 
     
    cout << "Ingrese la cantidad de segundos a convertir en horas,minutos y segundos \n";
    cin >> segundos;

    //cantidad de horas
	horas= segundos/3600;
	//actualizo los segundos para los minutos
    int resta= segundos- (horas*3600);
    if (resta>0){
    segundos=resta;
    minutos= segundos / 60;}
    //actualizo los segundos por si quedo resto para segundos
    resta=segundos-(minutos*60);
    if(resta>0){
    	segundos=resta;
	}

    cout << "El total de HS: " << horas <<" Minutos: "<<minutos <<" Segundos: "<<segundos<< endl;

/*6.2: Modifique el programa que pida valores enteros para hora, otra para minutos,
 y otra para segundos, como resultado lo transforma y muestra el total a cantidad de segundos.*/
 	
 	cout <<"------------------------------------------     Ejercicio 6.2   -------------------------------"<<endl;
	 minutos=0;
	 segundos=0;	
     int hora; 
     
    cout << "Ingrese el valor de la hora: \n";
    cin >> hora;

    cout << "Ingrese el valor de los minutos: \n";
    cin >> minutos;

    cout << "Ingrese el valor de los segundos: \n";
    cin >> segundos;

    int totalSegundos = hora * 3600 + minutos * 60 + segundos;

    cout << "El total de segundos es: " << totalSegundos << endl;




/*---------------------------------------------------------------------------------------------    Ejercicio 7 A y B .
	Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo
	rectángulo y escriba en la salida estándar su hipotenusa.		*/
	 cout<<"----------------------------------------------     ejercicio 7 A y B \n    -------------------------------"<<endl;
	 double c1, c2;
     cout << "Ingrese el primer cateto: \n";
     cin >> c1;
     cout << "Ingrese el segundo cateto: \n";
     cin >> c2;
     
     //7-A:Perimetro y superficie y 7-B:Hipotenusa
     //sqrt = calcular la raiz cuadrada de un num
     //pow = eleva un num a una potencia específica. Toma dos argumentos: la base y el exponente. Devuelve el resul de elevar la base al exponente.(base=2, exp=3,(2x2x2) r=8)
	double hipotenusa = sqrt(pow(c1, 2) + pow(c2, 2));
    // Calcular el perímetro
    double perimetro = c1 + c2 + hipotenusa;
    // Calcular la superficie
    double superficie = (c1 * c2) / 2;

    cout << "La hipotenusa es: " << hipotenusa << endl;
    cout <<"El perimetro es: "<<perimetro <<endl;
    cout <<"La superficie es: "<<superficie <<endl;
    
    
/*---------------------------------------------------------------------------------------------------------- Ejercicio 8

	La calificación final de un estudiante es la media ponderada de tres notas: la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar las 
	tres notas de un alumno y escriba en la salida estándar su nota final. Permita ingresar por teclado N, la cantidad de alumnos a calificar. */
	cout<<"------------------------------------------------     ejercicio 8 ---------------------------------"<<endl;
	double notaTeo, notaPrac, notaParti, notaFinal;
	int cantAlum=0;
	do{
	cout << "Ingrese la cantidad de alumnos por favor"<< endl;
	cin >> cantAlum;}while(cantAlum<1);
	
	while(cantAlum>0){
	
    cout << "Ingrese la nota de prácticas: \n";
    cin >> notaPrac;

    cout << "Ingrese la nota teórica: \n";
    cin >> notaTeo;

    cout << "Ingrese la nota de participación: \n";
    cin >> notaParti;

    notaFinal = (notaPrac * 0.3) + (notaTeo * 0.6) + (notaParti * 0.1);

    cout << "La nota final del alumno es: " << notaFinal << endl;
	cantAlum--;
}

/*-------------------------------------------------------------------------------------------------------------- Ejercicio 9
/*Ejercicio 9: Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras. 
Luego determine y muestre cuál de ellas llego primero.*/
	cout << "-----------------------------------------    Ejercicio 9  -------------------------------------"<<endl;
	string nadadora1,nadadora2;
	double t1,t2;
	
    printf("Ingrese el nombre de la nadadora 1 \n");
	scanf("", &nadadora1);
	printf("Ingrese el tiempo en la competencia ");
	scanf("%",t1);
	printf("Ingrese el nombre de la nadadora 2 \n");
	scanf("", &nadadora2);
	printf("Ingrese el tiempo del otro nadador");
	scanf("",t2);
	
	double ganadora = max(t1, t2);
	if(ganadora==t1){ 
	cout << "Llego primero "<<nadadora1 << endl;}
	else{cout << "Llego primero "<< nadadora2 << endl;}
	
	/*----------------------------------------------------------------------------------------------------------  Ejercicio 10.
	Escriba un programa que lea de la entrada estándar el nombre de una persona en un
	 arreglo de caracteres. Además, pide el año de nacimiento, y determina su edad en años complidos.*/
	 char nom[14];
	 int anio;
	 cout << "--------------------------------------     Ejercicio 10     ------------------------------------" << endl;
	 cout << "Ingrese el nombre"<<endl;
	 cin >> nom;
	 cout <<"ingrese año de nacimiento ej: 1970"<< endl;
	 cin >> anio;
	 edad= 2023-anio;
	 cout <<"La edad de "<<nom <<"es :"<<" "<<edad<<endl;
	
	
	/*---------------------------------------------------------------------------------------------------------  Ejercicio 11  
	Escribe un programa que lea de la entrada estándar dos números y muestre en la salida
	estándar su suma, resta, multiplicación y división. */
	cout<<"-----------------------------------------     ejercicio 11     -------------------------------------\n";
	float numero1, numero2;
    cout << "Ingrese el primer número: ";
    cin >> numero1;
    cout << "Ingrese el segundo número: ";
    cin >> numero2;
    // Realizar las operaciones
    float multiplicacion = numero1 * numero2;
    float division = numero1 / numero2;
    float suma = numero1 + numero2;
    float restaa = numero1 - numero2;
   
    // Mostrar los resultados 
    cout << "Multiplicación: " << multiplicacion << endl;
    cout << "División: " << division << endl;
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << restaa << endl;
    
/*------------------------------------------------------------------------------------------------     Ejercicio12.
Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la forma ax^2 + bx + c = 0, 
teniendo en cuenta que: f(a,b,c) NO TENGO IDEA PROFE.

 	
/*---------------------------------------------------------------------------------------------------- Ejercicio 13.

	Escribe la siguiente expresión en C++. Use precisión para la salida del cout.
	A) f(a,b)= (a/b) + 1
	B) f(a,b)= (a+b)/(c+d)
	C) f(a,b)= (a+(b/c))/(d+(e/f))
	D) f(a,b)= a + (b/(c-d)) */
	
     cout<<"-------------------------------------------  ejercicio 13 -------------------------------------\n";

	//A)	
	double a = 10.0;
  	double b = 5.0;
  	double result = (a/b)+1 ;
    cout << setprecision(3) << result << endl;

	
	//B)
	double c=15.3;
	double d=18.2;
	result= (a+b)/(c+d);
    cout << setprecision(3) << result << endl;

	//C)
	double e;
	double f;
	result= (a+(b/c))/(d+(e/f));
    cout << setprecision(3) << result << endl;

	//D)
	result=a + (b/(c-d));
    cout << setprecision(3) << result << endl;

	
	/*----------------------------------------------------------------------------------------   Ejercicio 14
	Realice un programa que calcule el valor que toma la siguiente funcion para unos
    valores dados de x e y: f(x,y) = raiz de x / y al cuadrado-1 */
	cout << "------------------------------------------------      Ejercicio 14   ------------------------------------ \n";
    int x=2;
    int y=6;
    result = sqrt(x)/y*y-1 ;
    cout << result << endl;
    
    /*Parte B Bucles: Conjunto de instrucciones que se repiten al cumplirse una condición. -----------------------------------------------*/
    
  /*Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y
   muestre en la salida estándar su tabla de multiplicar. Use un menú para elegir varias tablas diferentes a elección.*/ 
   cout<< "Ejercicio 1 Parte B Bucles\n";
   cout<<"En este ej encontre una forma con menu y sin menu.."<<endl;
   x=0;
   do{cout <<"Ingrese un num entero del 1 al 10\n";
   cin >> x; }while( x<1 || x>10);
   
   for(int h=0; h<11;h++){
   	int r=h*x;
   	cout <<x<<"X"<<h<<" ="<<r<<endl;
   }
   cout << "------------------- TABLAS MENU -----------------" << endl;
   
   
  
  
   		return 0;
   	
   }
   
  
   
   

 
 

 

 
 
 



    
    
    


