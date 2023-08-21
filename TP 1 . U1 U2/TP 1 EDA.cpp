#include <iostream>
#include <iomanip>
#include <cmath>
//para printf y scanf
#include <cstdio>
//para crear coleccion de tipo vector
#include <vector>
using namespace std;

int main(){

/* ----------------------------------------------------     PARTE   A   --------------------------------------*/       
        //al declarar x fuera del do puedo aplicarlo tanto en el do como en el switch
		int x;

          do{
       cout << "Ingrese un numero Parte A: 1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 "<<endl;
       cout << "  9 - 10 - 11 - 12 no esta - 13 - 14 -15=SALIR  "<<endl;
       cin >> x;
          	
          	//declaro variables antes de ingresar al switch ,dentro me dan error
	    int n1,n2,n3,totalSegundos,resta,cantAlum;
	    double superficie,hipotenusa,perimetro,ganadora,a,b,c,d,e,f,result ;
;
	    string nadadora1,nadadora2;
	    float multiplicacion, numero1, numero2,division,suma,restaa;
	    
	    
	    
	   switch(x){

	   case 1: 
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
	   
   		break;
   	
	case 2:
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
		
		break;
	
	case 3:
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
	
   cout <<"Ejercicio 3.B comentado en la lines 499 pedia ingresar datos erroneos y ve que pasaba..."<<endl;
	
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
	
	break;
	
	case 4:
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
	break;
	case 5: 
	/*----------------------------------------------------------------------------------------------------- Ejercicio 5
	Ejercicio 5: Escriba un fragmento de programa que intercambie (swap) los valores de 3 variables. */  
	cout << "-----------------------------------  ejercicio 5     -------------------------------" << endl;
      n1 = 55;
       n2 = 76;
       n3=66;

    cout << "Antes de aplicar SWAP : N1 = " << n1 << ", N2 = " << n2 <<", N3 = "<<n3 << endl;
	
    swap(n1, n2);
    swap(n2,n3);

    cout << "Después de aplicar SWAP : N1 = " << n1 << ", N2 = " << n2 <<", N3 = "<<n3<< endl;
    break;
    
    case 6:
    	/*---------------------------------------------------------------------------------------  Ejercicio 6   A y B
Ejercicio 6.1: Haga un programa en donde se ingresará una cantidad X de segundos, para luego convertir a horas, minutos y segundos.*/
	
    cout << "------------------------------------------    ejercicio 6.1  -------------------------------" << endl;

     int horas, minutos, segundos; 
     
    cout << "Ingrese la cantidad de segundos a convertir en horas,minutos y segundos \n";
    cin >> segundos;

    //cantidad de horas
	horas= segundos/3600;
	//actualizo los segundos para los minutos
     resta= segundos- (horas*3600);
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

     totalSegundos = hora * 3600 + minutos * 60 + segundos;

    cout << "El total de segundos es: " << totalSegundos << endl;

	break;
	
	case 7:
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
    hipotenusa = sqrt(pow(c1, 2) + pow(c2, 2));
    // Calcular el perímetro
    perimetro = c1 + c2 + hipotenusa;
    // Calcular la superficie
    superficie = (c1 * c2) / 2;

    cout << "La hipotenusa es: " << hipotenusa << endl;
    cout <<"El perimetro es: "<<perimetro <<endl;
    cout <<"La superficie es: "<<superficie <<endl;
    
    break;
    
    case 8:
    	/*---------------------------------------------------------------------------------------------------------- Ejercicio 8

	La calificación final de un estudiante es la media ponderada de tres notas: la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar las 
	tres notas de un alumno y escriba en la salida estándar su nota final. Permita ingresar por teclado N, la cantidad de alumnos a calificar. */
	cout<<"------------------------------------------------     ejercicio 8 ---------------------------------"<<endl;
	double notaTeo, notaPrac, notaParti, notaFinal;
	 cantAlum=0;
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
	break;
	case 9:
		/*-------------------------------------------------------------------------------------------------------------- Ejercicio 9
/*Ejercicio 9: Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras. 
Luego determine y muestre cuál de ellas llego primero.*/
	cout << "-----------------------------------------    Ejercicio 9  -------------------------------------"<<endl;
	 nadadora1,nadadora2;
	double t1,t2;
	
    printf("Ingrese el nombre de la nadadora 1 \n");
	scanf("", &nadadora1);
	printf("Ingrese el tiempo en la competencia ");
	scanf("%",t1);
	printf("Ingrese el nombre de la nadadora 2 \n");
	scanf("", &nadadora2);
	printf("Ingrese el tiempo del otro nadador");
	scanf("",t2);
	
	ganadora = max(t1, t2);
	if(ganadora==t1){ 
	cout << "Llego primero "<<nadadora1 << endl;}
	else{cout << "Llego primero "<< nadadora2 << endl;}
	break;
	
	case 10:
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
	 break;
	 
	case 11:
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
     multiplicacion = numero1 * numero2;
     division = numero1 / numero2;
     suma = numero1 + numero2;
     restaa = numero1 - numero2;
   
    // Mostrar los resultados 
    cout << "Multiplicación: " << multiplicacion << endl;
    cout << "División: " << division << endl;
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << restaa << endl;
    
    break;
    
    case 12:
    	
/*------------------------------------------------------------------------------------------------     Ejercicio12.
Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la forma ax^2 + bx + c = 0, 
teniendo en cuenta que: f(a,b,c) NO TENGO IDEA PROFE.*/
cout << "Ejercicio 12 sin realizar" <<endl;
break;

	case 13:
    	/*---------------------------------------------------------------------------------------------------- Ejercicio 13.

	Escribe la siguiente expresión en C++. Use precisión para la salida del cout.
	A) f(a,b)= (a/b) + 1
	B) f(a,b)= (a+b)/(c+d)
	C) f(a,b)= (a+(b/c))/(d+(e/f))
	D) f(a,b)= a + (b/(c-d)) */
	
     cout<<"-------------------------------------------  ejercicio 13 -------------------------------------\n";

	//A)	
	 a = 10.0;
  	 b = 5.0;
  	 result = (a/b)+1 ;
    cout << setprecision(3) << result << endl;

	
	//B)
	 c=15.3;
	 d=18.2;
	result= (a+b)/(c+d);
    cout << setprecision(3) << result << endl;
	//C)
	 e;
	 f;
	result= (a+(b/c))/(d+(e/f));
    cout << setprecision(3) << result << endl;

	//D)
	result=a + (b/(c-d));
    cout << setprecision(3) << result << endl;

	break;
	
	case 14:
		/*----------------------------------------------------------------------------------------   Ejercicio 14
	Realice un programa que calcule el valor que toma la siguiente funcion para unos
    valores dados de x e y: f(x,y) = raiz de x / y al cuadrado-1 */
	cout << "------------------------------------------------      Ejercicio 14   ------------------------------------ \n";
    int x=2;
    int y=6;
    result = sqrt(x)/y*y-1 ;
    cout << result << endl;
    break;
}


	   //otra vez el mismo error, al finalizar el do while en C++ agregar el ;
	   } while (x!=15);
	   
	   
	   
	   
	   
	   
	   
	   
	
	
	
	   /*------------------------------------------------------------------------   PARTE B   --------------------------------------------------*/
	       /*Parte B Bucles: Conjunto de instrucciones que se repiten al cumplirse una condición. -----------------------------------------------*/
    
    
    
    
    
    
    
  
  
  /*Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y
   muestre en la salida estándar su tabla de multiplicar. Use un menú para elegir varias tablas diferentes a elección.*/ 
   cout<< "Ejercicio 1 Parte B Bucles "<<endl;
  
   cout << "---------------------------- TABLAS MENU ------------------------------" << endl;
   do{
   
   	for( int h=1; h<11;h++){
   	cout <<"ingrese "<<h<<"para ver sus tablas del 1 al 10"<<endl;
   	
   }
   cout <<"Ingrese 11 para salir"<<endl;
   cin >> x;
   
   
   switch(x){

	   case 1: for(int h=1; h<11;h++){
   		int r=h*x;
   		cout <<x<<"X"<<h<<" ="<<r<<endl;
   		}
   		break;
   	   case 2: for(int h=1; h<11;h++){
   		int r=h*x;
   		cout <<x<<"X"<<h<<" ="<<r<<endl;
   		}
   		break;		
   		case 3: for(int h=1; h<11;h++){
   		int r=h*x;
   		cout <<x<<"X"<<h<<" ="<<r<<endl;
   		}
   		break;
   		case 4: for(int h=1; h<11;h++){
   		int r=h*x;
   		cout <<x<<"X"<<h<<" ="<<r<<endl;
   		}
   		break;
   		case 5: for(int h=1; h<11;h++){
   		int r=h*x;
   		cout <<x<<"X"<<h<<" ="<<r<<endl;
   		}
   		break;
   		case 6: for(int h=1; h<11;h++){
   		int r=h*x;
   		cout <<x<<"X"<<h<<" ="<<r<<endl;
   		}
   		break;
   		case 7: for(int h=1; h<11;h++){
   		int r=h*x;
   		cout <<x<<"X"<<h<<" ="<<r<<endl;
   		}
   		break;
   		case 8: for(int h=1; h<11;h++){
   		int r=h*x;
   		cout <<x<<"X"<<h<<" ="<<r<<endl;
   		}
   		break;
   		case 9: for(int h=1; h<11;h++){
   		int r=h*x;
   		cout <<x<<"X"<<h<<" ="<<r<<endl;
   		}
   		break;
   		case 10: for(int h=1; h<11;h++){
   		int r=h*x;
   		cout <<x<<"X"<<h<<" ="<<r<<endl;
   		}
   		break;
   	}
   if (x==11){
   	cout << "fin del programa,adios "<<endl; 
   }
   
}while(x!=11);
 

   	/*Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese momento el programa debe
	   terminar y mostrar en la salida estándar el número de valores leídos mayores que cero. Usar una estructura do-while.*/
	   cout << "------------------- Ejercicio 2 Parte B  -----------------------"<< endl;
	   //creo una coleccion porque no se cuantos ingresaran para doubles por si ingresan con .
	   vector <double> coleccion; 
	   
	   do {
	    cout <<"Ingrese un numero distinto de 0"<<endl;
	    cin >> x;
	    if(x>0){
	   	 //agrego al vector
	   	 coleccion.push_back(x);}
	   } 
	   while(x!=0);
	   //   ¡siempre agregar punto y como al finalizar el do while!
	    // Acceder a los elementos de la colección
        cout << "Elementos de la colección mayores a 0:" << endl;
        for (int i=0;i<coleccion.size();i++) { 	
        cout << coleccion[i] <<" ,"<<endl;

    }
	   /*Ejercicios 3: Realice un programa que calcule y muestre en la salida estándar, 
	   la suma de los cuadrados de los 10 primeros enteros mayores que cero. Mostrar un mensaje de invalidez, si ingresa un negativo.*/
	int sum=0;
	for(int i =1; i<11;i++){
		cout<< "Ingrese el"<<i<<endl;
		cin >> x;
		if(x==i){
		sum += x * i;
		}if(x<0){
			cout<<"Error: Num negativo, vuelva a ingresar el numero"<<endl;
			i--;
		}if(x!=i && x>0){cout<<"Numero incorrecto, vuelva a ingresarlo..."<<endl;
		i--;
		}
	}
	   cout << "suma total del cuadrado de los 10 prim num :"<<sum <<endl;
	   
	   /*Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas. 
	   Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.*/
	   
	   cout<< "00:00HS Ingrese temperatura exterior por favor..."<<endl;
	   cin >> x;
	    int hora=0;
	   int cont=0;

	   for(int i=0;i<25;i++){
	   	cont++;
	   	if(cont==4){
	   		cout<<"Hora: "<<hora <<endl;
	   		cout<<"Ingrese temp exterior por favor..."<<endl;
	   		cin >>x;
	   		cont=0;
		   }
		hora++;

	   	
	   }
	   
	   
	   /*Ejercicio 5: Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0. 
	   El programa debe entregar la suma de los valores mayores a 0 introducidos.*/
	   
	   /*Ejercicio 6: Escriba un programa que calcule num^exp, donde tanto num como exp son enteros positivos, sin utilizar la función pow. 
	   Donde num será una base generada de forma aleatoria entre
	    2 y 42, y exp será ingresada por teclado no mayor a 5. Usar las librerías stdlib.h y cmath. */
   	
   	
	 /*Ejercicio 7:
       A-Escriba un programa que calcule usando un while, el valor de: 1 + 2 + 3 +...+ n.
       B-Escriba un programa que calcule usando un for, el valor de: 1 + 3 + 5 +...+ 2n-1*/  
       
       
    /*Ejercicio 8: En una clase de 5 alumnos se han realizado 3 exámenes, y se requiere determinar según se elija una opción el número de: 
	 a) Alumnos que aprobaron todos los exámenes.
	 b) Alumnos que aprobaron al menos un examen. c) Alumnos que aprobaron únicamente el último examen.   */
	 
    /*Ejercicio 9: Escriba un programa que calcule el valor de: 1 * 2 * 3 *...* n (factorial)*/
	
	/*Ejercicio 10: Escriba un programa que calcule el valor de: 1! +2! + 3! + ... + n! (suma de factoriales).*/
	
	/*Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n  */
	
	/*Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n  */
	
	/*Ejercicio 13: Hacer un programa que muestre la serie Fibonacci, mostrando sus elementos desde el 1..hasta n. 
	Ej.: si n=13, nos muestra la salida: Fibonacci(13)= 1 1 2 3 5 8 13. */
	   
       
       
     
       
   		
       
	   //fin del main
           	   		return 0;

   }
   

   
 

 

 
