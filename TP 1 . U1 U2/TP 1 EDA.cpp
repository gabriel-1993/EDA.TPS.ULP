#include <iostream>
#include <iomanip>
#include <cmath>
//para printf y scanf
#include <cstdio>
//para crear coleccion de tipo vector
#include <vector>
//generar num aleatorio
#include<stdlib.h>
//libreria que nos permite saber cuantos segundos han pasado desde una fecha en 1970, osea siempre va cambiando el valor
#include<time.h>
using namespace std;

int main(){
<<<<<<< HEAD
  // Crear un generador de números aleatorios parte 2 ejercicio 6 linea 560
=======
  // Crear un generador de nÃºmeros aleatorios parte 2 ejercicio 6 linea 560
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
   
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
<<<<<<< HEAD
		usuario, además debe mostrar el nombre_completo por pantalla. (considera los espacios)
		B) Ejemplifique, como se coloca un comentario de una o varias líneas.
		C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas.
=======
		usuario, ademÃ¡s debe mostrar el nombre_completo por pantalla. (considera los espacios)
		B) Ejemplifique, como se coloca un comentario de una o varias lÃ­neas.
		C) Como se baja un renglÃ³n al mostrar algo por pantalla, nombre alternativas.
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
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
<<<<<<< HEAD
		/*  Escribe un programa que lea de la entrada estándar el precio de un producto y muestre
    	en la salida estándar el precio del producto al aplicarle el IVA.*/
=======
		/*  Escribe un programa que lea de la entrada estÃ¡ndar el precio de un producto y muestre
    	en la salida estÃ¡ndar el precio del producto al aplicarle el IVA.*/
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
	
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
	
<<<<<<< HEAD
	Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
	Edad: dato de tipo entero. Sexo: dato de tipo carácter. Altura en metros: dato de tipo real. Tras
	leer los datos, el programa debe mostrarlos en la salida estándar.*/
=======
	Realice un programa que lea de la entrada estÃ¡ndar los siguientes datos de una persona:
	Edad: dato de tipo entero. Sexo: dato de tipo carÃ¡cter. Altura en metros: dato de tipo real. Tras
	leer los datos, el programa debe mostrarlos en la salida estÃ¡ndar.*/
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
	
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

	Ejecute el programa del ejercicio anterior con entradas errÃ³neas y observe los
	resultados. Por ejemplo, introduzca un dato de tipo carÃ¡cter cuando se espera un dato de tipo
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
	
	/*Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos, y su salida serÃ¡ el monto convertido a dÃ³lares.
	 Tome la cotizaciÃ³n actual de dÃ³lar blue, redondear a 2 cifras.*/
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

<<<<<<< HEAD
    cout << "Después de aplicar SWAP : N1 = " << n1 << ", N2 = " << n2 <<", N3 = "<<n3<< endl;
=======
    cout << "DespuÃ©s de aplicar SWAP : N1 = " << n1 << ", N2 = " << n2 <<", N3 = "<<n3<< endl;
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
    break;
    
    case 6:
    	/*---------------------------------------------------------------------------------------  Ejercicio 6   A y B
<<<<<<< HEAD
Ejercicio 6.1: Haga un programa en donde se ingresará una cantidad X de segundos, para luego convertir a horas, minutos y segundos.*/
=======
Ejercicio 6.1: Haga un programa en donde se ingresarÃ¡ una cantidad X de segundos, para luego convertir a horas, minutos y segundos.*/
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
	
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
<<<<<<< HEAD
	Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo
	rectángulo y escriba en la salida estándar su hipotenusa.		*/
=======
	Escriba un programa que lea de la entrada estÃ¡ndar los dos catetos de un triÃ¡ngulo
	rectÃ¡ngulo y escriba en la salida estÃ¡ndar su hipotenusa.		*/
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
	 cout<<"----------------------------------------------     ejercicio 7 A y B \n    -------------------------------"<<endl;
	 double c1, c2;
     cout << "Ingrese el primer cateto: \n";
     cin >> c1;
     cout << "Ingrese el segundo cateto: \n";
     cin >> c2;
     
     //7-A:Perimetro y superficie y 7-B:Hipotenusa
     //sqrt = calcular la raiz cuadrada de un num
<<<<<<< HEAD
     //pow = eleva un num a una potencia específica. Toma dos argumentos: la base y el exponente. Devuelve el resul de elevar la base al exponente.(base=2, exp=3,(2x2x2) r=8)
    hipotenusa = sqrt(pow(c1, 2) + pow(c2, 2));
    // Calcular el perímetro
=======
     //pow = eleva un num a una potencia especÃ­fica. Toma dos argumentos: la base y el exponente. Devuelve el resul de elevar la base al exponente.(base=2, exp=3,(2x2x2) r=8)
    hipotenusa = sqrt(pow(c1, 2) + pow(c2, 2));
    // Calcular el perÃ­metro
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
    perimetro = c1 + c2 + hipotenusa;
    // Calcular la superficie
    superficie = (c1 * c2) / 2;

    cout << "La hipotenusa es: " << hipotenusa << endl;
    cout <<"El perimetro es: "<<perimetro <<endl;
    cout <<"La superficie es: "<<superficie <<endl;
    
    break;
    
    case 8:
    	/*---------------------------------------------------------------------------------------------------------- Ejercicio 8

	La calificaciÃ³n final de un estudiante es la media ponderada de tres notas: la nota de prÃ¡cticas que cuenta un 30% del total, la nota teÃ³rica que cuenta un 60% y la nota de participaciÃ³n que cuenta el 10% restante. Escriba un programa que lea de la entrada estÃ¡ndar las 
	tres notas de un alumno y escriba en la salida estÃ¡ndar su nota final. Permita ingresar por teclado N, la cantidad de alumnos a calificar. */
	cout<<"------------------------------------------------     ejercicio 8 ---------------------------------"<<endl;
	double notaTeo, notaPrac, notaParti, notaFinal;
	 cantAlum=0;
	do{
	cout << "Ingrese la cantidad de alumnos por favor"<< endl;
	cin >> cantAlum;}while(cantAlum<1);
	
	while(cantAlum>0){
	
    cout << "Ingrese la nota de prÃ¡cticas: \n";
    cin >> notaPrac;

    cout << "Ingrese la nota teÃ³rica: \n";
    cin >> notaTeo;

    cout << "Ingrese la nota de participaciÃ³n: \n";
    cin >> notaParti;

    notaFinal = (notaPrac * 0.3) + (notaTeo * 0.6) + (notaParti * 0.1);

    cout << "La nota final del alumno es: " << notaFinal << endl;
	cantAlum--;
	}
	break;
	case 9:
		/*-------------------------------------------------------------------------------------------------------------- Ejercicio 9
/*Ejercicio 9: Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras. 
Luego determine y muestre cuÃ¡l de ellas llego primero.*/
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
<<<<<<< HEAD
	Escriba un programa que lea de la entrada estándar el nombre de una persona en un
	 arreglo de caracteres. Además, pide el año de nacimiento, y determina su edad en años complidos.*/
=======
	Escriba un programa que lea de la entrada estÃ¡ndar el nombre de una persona en un
	 arreglo de caracteres. AdemÃ¡s, pide el aÃ±o de nacimiento, y determina su edad en aÃ±os complidos.*/
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
	 char nom[14];
	 int anio;
	 cout << "--------------------------------------     Ejercicio 10     ------------------------------------" << endl;
	 cout << "Ingrese el nombre"<<endl;
	 cin >> nom;
	 cout <<"ingrese aÃ±o de nacimiento ej: 1970"<< endl;
	 cin >> anio;
	 edad= 2023-anio;
	 cout <<"La edad de "<<nom <<"es :"<<" "<<edad<<endl;
	 break;
	 
	case 11:
	 	/*---------------------------------------------------------------------------------------------------------  Ejercicio 11  
<<<<<<< HEAD
	Escribe un programa que lea de la entrada estándar dos números y muestre en la salida
	estándar su suma, resta, multiplicación y división. */
=======
	Escribe un programa que lea de la entrada estÃ¡ndar dos nÃºmeros y muestre en la salida
	estÃ¡ndar su suma, resta, multiplicaciÃ³n y divisiÃ³n. */
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
	cout<<"-----------------------------------------     ejercicio 11     -------------------------------------\n";
	float numero1, numero2;
    cout << "Ingrese el primer nÃºmero: ";
    cin >> numero1;
    cout << "Ingrese el segundo nÃºmero: ";
    cin >> numero2;
    // Realizar las operaciones
     multiplicacion = numero1 * numero2;
     division = numero1 / numero2;
     suma = numero1 + numero2;
     restaa = numero1 - numero2;
   
    // Mostrar los resultados 
    cout << "MultiplicaciÃ³n: " << multiplicacion << endl;
    cout << "DivisiÃ³n: " << division << endl;
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

	Escribe la siguiente expresiÃ³n en C++. Use precisiÃ³n para la salida del cout.
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
<<<<<<< HEAD
	       /*Parte B Bucles: Conjunto de instrucciones que se repiten al cumplirse una condición. -----------------------------------------------*/
=======
	       /*Parte B Bucles: Conjunto de instrucciones que se repiten al cumplirse una condiciÃ³n. -----------------------------------------------*/
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
    
    
    
    
    do{  cout << "Ingrese un numero Parte B: 1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 "<<endl;
         cout << "  9 - 10 - 11 - 12 no esta - 13 - 14=SALIR  "<<endl;
         cin >> x;
    	
    	//cambio la declaracion de las variables y las declaro fuera del switch
    	vector <double> coleccion; 
    	vector<int> coleccion5;
		int suma,hora,cont,aux,exp,resultado,aleatorioMin,aleatorioMax,alumnos,examenes,opcion,factorial,n;
    	switch(x) {
    		
<<<<<<< HEAD
    		case 1: /*Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y
   			muestre en la salida estándar su tabla de multiplicar. Use un menú para elegir varias tablas diferentes a elección.*/ 
=======
    		case 1: /*Ejercicio 1: Realice un programa que solicite de la entrada estÃ¡ndar un entero del 1 al 10 y
   			muestre en la salida estÃ¡ndar su tabla de multiplicar. Use un menÃº para elegir varias tablas diferentes a elecciÃ³n.*/ 
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
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
		   		
		   	}
				if (x==11){
			   	cout << "fin del programa,adios "<<endl; 
		    }  
				}while(x!=11);			
    			break;
    			
    		case 2:
<<<<<<< HEAD
    			 	/*Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese momento el programa debe
					   terminar y mostrar en la salida estándar el número de valores leídos mayores que cero. Usar una estructura do-while.*/
=======
    			 	/*Ejercicio 2: Realice un programa que lea de la entrada estÃ¡ndar nÃºmeros hasta que se introduzca un cero. En ese momento el programa debe
					   terminar y mostrar en la salida estÃ¡ndar el nÃºmero de valores leÃ­dos mayores que cero. Usar una estructura do-while.*/
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
					   cout << "------------------- Ejercicio 2 Parte B  -----------------------"<< endl;
					   //creo una coleccion porque no se cuantos ingresaran para doubles por si ingresan con .
					   
					   do {
					    cout <<"Ingrese un numero distinto de 0"<<endl;
					    cin >> x;
					    if(x>0){
					   	 //agrego al vector
					   	 coleccion.push_back(x);}
					   } 
					   while(x!=0);
<<<<<<< HEAD
					   //   ¡siempre agregar punto y como al finalizar el do while!
					    // Acceder a los elementos de la colección
				        cout << "Elementos de la colección mayores a 0:" << endl;
=======
					   //   Â¡siempre agregar punto y como al finalizar el do while!
					    // Acceder a los elementos de la colecciÃ³n
				        cout << "Elementos de la colecciÃ³n mayores a 0:" << endl;
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
				        for (int i=0;i<coleccion.size();i++) { 	
				        cout << coleccion[i] <<" ,"<<endl;
				
				    }
    				break;	
			case 3:
<<<<<<< HEAD
				  /*Ejercicios 3: Realice un programa que calcule y muestre en la salida estándar, 
=======
				  /*Ejercicios 3: Realice un programa que calcule y muestre en la salida estÃ¡ndar, 
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
	  				 la suma de los cuadrados de los 10 primeros enteros mayores que cero. Mostrar
					    un mensaje de invalidez, si ingresa un negativo.*/
				suma=0;
				for(int i =1; i<11;i++){
					cout<< "Ingrese el"<<i<<endl;
					cin >> x;
					if(x==i){
					suma += x * i;
					}if(x<0){
						cout<<"Error: Num negativo, vuelva a ingresar el numero"<<endl;
						i--;
					}if(x!=i && x>0){cout<<"Numero incorrecto, vuelva a ingresarlo..."<<endl;
					i--;
					}
				}
	   			cout << "suma total del cuadrado de los 10 prim num :"<<suma <<endl;
    			break;
			case 4:
				  
<<<<<<< HEAD
		   /*Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas. 
		   Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.*/
=======
		   /*Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, leyÃ©ndola durante un perÃ­odo de 24 horas. 
		   Es decir, debe leer 6 temperaturas. Calcule la temperatura media del dÃ­a, la temperatura mÃ¡s alta y la mÃ¡s baja.*/
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
	   
		   cout<< "00:00HS Ingrese temperatura exterior por favor..."<<endl;
		   cin >> x;
		    hora=0;
		    cont=0;
	
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
    			break;
    		case 5:			
				   /*Ejercicio 5: Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca
				    el valor 0. 
				   El programa debe entregar la suma de los valores mayores a 0 introducidos.*/
				   suma=0;
				   do{ cout << "Ingrese un valor entero"<<endl;
				   cin >> x;
				   if(x>0){
				   	suma+=x;
				   }
				   }while(x<20 && x>30 && x!=0);
				   cout << "La suma total de n mayores a 0 = "<<suma<<endl;
    			break;
    			case 6:	   
	   				/*Ejercicio 6: Escriba un programa que calcule num^exp, donde tanto num como exp son enteros positivos, 
<<<<<<< HEAD
	   				sin utilizar la función pow. Donde num será una base generada de forma aleatoria entre
	    			2 y 42, y exp será ingresada por teclado no mayor a 5. Usar las librerías stdlib.h y cmath. */
	    			x=0;
	    			exp=0;
	    		// Crear un generador de números aleatorios
=======
	   				sin utilizar la funciÃ³n pow. Donde num serÃ¡ una base generada de forma aleatoria entre
	    			2 y 42, y exp serÃ¡ ingresada por teclado no mayor a 5. Usar las librerÃ­as stdlib.h y cmath. */
	    			x=0;
	    			exp=0;
	    		// Crear un generador de nÃºmeros aleatorios
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
				srand(time(NULL));
				aleatorioMin=2;
				aleatorioMax=42;
				x = aleatorioMin + rand() % (aleatorioMax +1 - aleatorioMin) ;

<<<<<<< HEAD
    			// Imprimir el número aleatorio generado
=======
    			// Imprimir el nÃºmero aleatorio generado
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
    			cout << "Numero aleatorio: " << x << endl;
					do{
	    			cout << "Ingrese el exp entre 1 y 5"<<endl;
	    			cin >> exp;
					}while(x<1 || x>5);
					for( int i=0;i<exp;i++){
						resultado=x*x ;
					}
					cout << "Resultado de "<<x<<"^"<<exp<<"="<<resultado<<endl; 
					
    			break;
    		case 7:	
	 			/*Ejercicio 7:
       			A-Escriba un programa que calcule usando un while, el valor de: 1 + 2 + 3 +...+ n.
      	 		B-Escriba un programa que calcule usando un for, el valor de: 1 + 3 + 5 +...+ 2n-1*/  
      	 		x=0;
      	 		resultado=0;
      	 		cont=1;
      	 		    //primero verifica que ingresen un numero mayor a 0
      	 			do{
      	 			cout <<"Para sumar los num desde 1 hasta el valor ingresado, ingrese un limite "<<endl;
      	 			cin >> x;
				   }while (x<1);
				   
      	 	cout<< "valor de ya ingresado ;"<<x<<endl;
      	 		while(cont<x){
      	 			
      	 			aux=1+cont;
       	 			resultado=  cont + aux;	
      	 			cout<< "Suma :"<<cont<<"+"<<aux<<"="<<resultado<<endl;
      	 			cont++;
				   }
    				cout << "El resultado total es"<<resultado<<endl;
    			break;	
    	
    		case 8:
<<<<<<< HEAD
    			 /*Ejercicio 8: En una clase de 5 alumnos se han realizado 3 exámenes, y se requiere determinar según se elija una opción el número
				  de: a) Alumnos que aprobaron todos los exámenes.
					  b) Alumnos que aprobaron al menos un examen. 
					  c) Alumnos que aprobaron únicamente el último examen.   */
=======
    			 /*Ejercicio 8: En una clase de 5 alumnos se han realizado 3 exÃ¡menes, y se requiere determinar segÃºn se elija una opciÃ³n el nÃºmero
				  de: a) Alumnos que aprobaron todos los exÃ¡menes.
					  b) Alumnos que aprobaron al menos un examen. 
					  c) Alumnos que aprobaron Ãºnicamente el Ãºltimo examen.   */
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
		    alumnos = 5;
		    examenes = 3;
		    opcion;
		
<<<<<<< HEAD
		    cout << "Ingrese la opción (1 :aprobaron todos los examenes, 2 :aprobaron al menos un examen o 3 :aprobaron unicamente el ultimo examen): "<<endl;
=======
		    cout << "Ingrese la opciÃ³n (1 :aprobaron todos los examenes, 2 :aprobaron al menos un examen o 3 :aprobaron unicamente el ultimo examen): "<<endl;
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
		    cin >> opcion;
		
		    switch(opcion) {
		        case 1: {
		            int aprobados = 0;
		            for(int i = 0; i < alumnos; i++) {
		                int contador = 0;
		                for(int j = 0; j < examenes; j++) {
		                    cout << "Ingrese el resultado del examen " << j+1 << " para el alumno " << i+1 << ": ";
		                    int resultado;
		                    cin >> resultado;
		                    if(resultado >= 60) {
		                        contador++;
		                    }
		                }
		                if(contador == examenes) {
		                    aprobados++;
		                }
		            }
<<<<<<< HEAD
		            cout << "El número de alumnos que aprobaron todos los exámenes es: " << aprobados << endl;
=======
		            cout << "El nÃºmero de alumnos que aprobaron todos los exÃ¡menes es: " << aprobados << endl;
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
		            break;
		        }
		        case 2: {
		            int aprobados = 0;
		            for(int i = 0; i < alumnos; i++) {
		                int contador = 0;
		                for(int j = 0; j < examenes; j++) {
		                    cout << "Ingrese el resultado del examen " << j+1 << " para el alumno " << i+1 << ": ";
		                    int resultado;
		                    cin >> resultado;
		                    if(resultado >= 60) {
		                        contador++;
		                        break;
		                    }
		                }
		                if(contador > 0) {
		                    aprobados++;
		                }
		            }
<<<<<<< HEAD
		            cout << "El número de alumnos que aprobaron al menos un examen es: " << aprobados << endl;
=======
		            cout << "El nÃºmero de alumnos que aprobaron al menos un examen es: " << aprobados << endl;
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
		            break;
		        }
		        case 3: {
		            int aprobados = 0;
		            for(int i = 0; i < alumnos; i++) {
		                int contador = 0;
		                for(int j = 0; j < examenes; j++) {
		                    cout << "Ingrese el resultado del examen " << j+1 << " para el alumno " << i+1 << ": ";
		                    int resultado;
		                    cin >> resultado;
		                    if(j == examenes-1 && resultado >= 60) {
		                        contador++;
		                    } else if(j == examenes-1 && resultado < 60) {
		                        contador = 0;
		                        break;
		                    }
		                }
		                if(contador > 0) {
		                    aprobados++;
		                }
		            }
<<<<<<< HEAD
		            cout << "El número de alumnos que aprobaron únicamente el último examen es: " << aprobados << endl;
		            break;
		        }
		        default:
		            cout << "Opción inválida" << endl;
=======
		            cout << "El nÃºmero de alumnos que aprobaron Ãºnicamente el Ãºltimo examen es: " << aprobados << endl;
		            break;
		        }
		        default:
		            cout << "OpciÃ³n invÃ¡lida" << endl;
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
		            break;
		    }
    			break;
    		case 9:
    		/*Ejercicio 9: Escriba un programa que calcule el valor de: 1 * 2 * 3 *...* n (factorial)*/
					
  					 factorial = 1;
<<<<<<< HEAD
    				cout << "Ingrese un número: ";
=======
    				cout << "Ingrese un nÃºmero: ";
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
   					cin >> n;
   					 for (int i = 1; i <= n; ++i) {
   					     factorial *= i;
    					}
			cout << "El factorial de " << n << " es: " << factorial << endl;
    			break;
    		case 10:
    				/*Ejercicio 10: Escriba un programa que calcule el valor de: 1! +2! + 3! + ... + n! (suma de factoriales).*/
<<<<<<< HEAD
    				
=======
			
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
    			break;
    		case 11:
    			break;
    		case 12:
    			break;
    		case 13:
    			break;
    	
		}
	
    	
    	
	}while(x!=14);
     
	
	
	/*Ejercicio 11: Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n  */
	
<<<<<<< HEAD
	/*Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n  */
=======
	/*Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresiÃ³n: 1-2+3-4+5-6...n  */
>>>>>>> 061e7a49e1294c81ec0737c5c7e9086893237792
	
	/*Ejercicio 13: Hacer un programa que muestre la serie Fibonacci, mostrando sus elementos desde el 1..hasta n. 
	Ej.: si n=13, nos muestra la salida: Fibonacci(13)= 1 1 2 3 5 8 13. */
	   	
       
	   //fin del main
           	   		return 0;

   }
  
   

   

 

   

   
 

 

 
