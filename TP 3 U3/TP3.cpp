//libreria obligatoria 
#include <iostream>
// Para no incluir todo el tiempo los std::cout, std:: cin ,etc
using namespace std;
//Biblioteca String: copiar,cambiar caracteres, comparar cadenas,etc
#include <string.h>
//strlen:long cadena
//strcpy copia cad 1 en cad 2
//strcmp comparar 2 cadenas
//strcat copiar 1 cad al final de cad 2
//strncat: copiar/agregar n caracteres de cad 2 en cad1
#include <cstring>
//configurar caracteres español
//primer linea del main continua la configuracion... 
#include <locale.h>

// una forma mas rapida de obtener el tamanio del array:
//int tam = sizeof(vector) / sizeof(vector[0]);    

//TRABAJO PRACTICO N° 3 - Resuelva los ejercicios en Dev C++ Tema Cadenas: una cadena está representada 
//por un array de caracteres (char) habitualmente terminado con el carácter especial de fin de cadena

//1. Escribe un programa que pida tres nombres animales al usuario, y muestre su letra capital y longitud (strchr y strlen).
//Ejemplo: el usuario introduce como cadenas león, jirafa, y elefante. El programa mostrará por pantalla. 
//El número de letras para león es 4, letra ‘L’, para jirafa es 6, letra ‘J’; y para elefante es 8, con letra ‘E’. 
//Pasar la letra a MAYÚSCULA.

void ej1(){
    char nombres[3][100]; 

    // Pedir que ingreses los nombres de los animales
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese el nombre del animal " << ": ";
        cin >> nombres[i];
    }

    //longitud y letra capital de cada nombre
    for (int i = 0; i < 3; i++) {
        int longitud = strlen(nombres[i]);
        // Buscar la primera letra en el nombre
        char *letraCapital = strchr(nombres[i], nombres[i][0]); 

        if (letraCapital != nullptr) {
        	// mayuscula
            *letraCapital = toupper(*letraCapital); 
        }

        cout << "El numero de letras para " << nombres[i] << " es " << longitud << ", letra '" << nombres[i][0] << "'." << endl;
    }
}    

//2. Escribe un programa que pida tres cadenas al usuario, y muestre el resultado de concatenar 
//las dos primeras letras de las cadenas introducidas, pero además que nos indique si las dos primeras 
//cadenas son iguales. Ejemplo: el usuario introduce como cadenas perro, vaca y cocodrilo. 
//El programa mostrará por pantalla: “El resultado de concatenar las dos primeras letras de las cadenas 
//es: “pevaco”. La primera cadena, perro, no es igual a la segunda cadena, vaca.”
//Si el usuario introdujera perro, perro, mulo, el programa debería mostrar: “El resultado de concatenar las 
//dos primeras letras de las cadenas es pepemu. La primera cadena, perro, es igual a la segunda cadena, perro.”
void ej2(){
	char cad1[30],cad2[30],cad3[30], res[10];
	int n1,n2,n3,limite=2;
	cout<<"Ejercicio 1"<<endl;
	cout<<"Ingrese palabra1"<<endl;
	cin>> cad1;
	cout<<"Ingrese palabra2"<<endl;
	cin>> cad2;
	cout<<"Ingrese palabra3"<<endl;
	cin>> cad3;
    strncat(res, cad1, limite);
    strncat(res, cad2, limite);
    strncat(res, cad3, limite);
    cout <<res<<endl;
	limite=0;
	limite= strcmp(cad1,cad2);
	if(limite==0){
		cout<<"La cadena 1: "<<cad1<<" es igual a la cadena 2: "<<cad2<<endl;
	}else{
		cout<<"La cadena 1: "<<cad1<<" No es igual a la cadena 2: "<<cad2<<endl;
	}
}

//3. Escribe un programa que pida al conductor la patente del vehículo consistente en 2 letras al inicio, 
//3 números, y 2 letras más al final. Al ingresarla, se debe cargar anexando un guion (separada por guiones). 
//Ejemplo: AE-529-QZ. Usa strtok, para separar los 3 grupos, y mostrarlos individualmente. 
//Validar la longitud de los grupos. Use strlen y strcat.
void ej3() {
    char patente[10];
    char delimitador[] = " ";
    cout << "Ingrese la patente con el siguiente formato (respete los espacios)AB 123 CD" << endl;
    cin.getline(patente, 10, '\n');

    // Verificar la longitud de la patente
    if (strlen(patente) != 9) {
        cout << "Formato de patente incorrecto." << endl;
        return;
    }
    char *token = strtok(patente, delimitador);
    // Para almacenar la patente con "-" entre los tokens
	char nuevaPatente[12]; 
    char guion[] = "-";
    if (token != NULL) {
        strcpy(nuevaPatente, token);
        strcat(nuevaPatente, guion);
    }
    while (token != NULL) {
        token = strtok(NULL, delimitador);
        if (token != NULL) {
            strcat(nuevaPatente, token);
            strcat(nuevaPatente, guion);
        }
    }
    cout << "Patente Final: " << nuevaPatente << endl;
}

//4. Escribe un programa que pida 2 nombres de paises por teclado, nos dice cual tiene el nombre más largo(strlen), 
//y permita elegir una opción: determinar si contiene “guay” (strstr), reemplazar el mas corto en el mas largo(strcpy), 
//anexar el más largo al mas corto(strcat). Luego muestra el resultado en pantalla.
//Ejemplo: s1=Uruguay s2=Paraguay, tiene guay. Reemplaza s2=Uruguay por s2, y anexa y muestra s1=UruguayParaguay.
void ej4(){
	 char s1[50], s2[50];

    cout << "Ingrese el primer pais: ";
    cin.getline(s1, sizeof(s1));

    cout << "Ingrese el segundo pais: ";
    cin.getline(s2, sizeof(s2));

    // Determinar cual tiene el nombre mas largo
    if (strlen(s1) > strlen(s2)) {
        cout << "El nombre mas largo es: " << s1 << endl;
    } else if (strlen(s2) > strlen(s1)) {
        cout << "El nombre mas largo es: " << s2 << endl;
    } else {
        cout << "Ambos nombres tienen la misma longitud." << endl;
    }

    // Verificar si alguno de los nombres contiene "guay"
    if (strstr(s1, "guay") || strstr(s2, "guay")) {
        cout << "Al menos uno de los nombres contiene 'guay'." << endl;
    } else {
        cout << "Ninguno de los nombres contiene 'guay'." << endl;
    }

    // Reemplazar el nombre mas corto en el nombre mas largo
    if (strlen(s1) < strlen(s2)) {
        strcpy(s2, s1);
    } else {
        strcpy(s1, s2);
    }

    // Copiar le nombre mas largo en el mas corto
    strcat(s1, s2);

    // Mostrar el resultado
    cout << "El resultado final es: " << s1 << endl;
	
}

//5. Se deben ingresa un par de frases por teclado, luego determine las mismas coinciden hasta la 5ta letra (strncasecmp). 
//Ejemplo: “La Vida es Bella” y “la VIRTUD de los grandes” coinciden. Nos dirá si además de coincidir, 
//contiene la subcadena “la” en ambas frases, solo una de ellas, o no la contiene. (use strstr).
void ej5(){
	char frase1[17];
	char frase2[25];
	cout<<"Ingrese la primer frase"<<endl;
	cin.getline(frase1, 17, '\n');	
	cout<<"Ingrese la segunda frase"<<endl;
	cin.getline(frase1, 17, '\n');
	
	int comparacion = strncasecmp(frase1, frase2, 5);

  if (comparacion == 0) {
        cout << "Las frases coinciden hasta el quinto caracter." << endl;
        
        // Verificar si ambas frases contienen la subcadena "la"
        if (strstr(frase1, "la") && strstr(frase2, "la")) {
            cout << "Ambas frases contienen la subcadena 'la'." << endl;
        } else if (strstr(frase1, "la") || strstr(frase2, "la")) {
            cout << "Solo una de las frases contiene la subcadena 'la'." << endl;
        } else {
            cout << "Ninguna de las frases contiene la subcadena 'la'." << endl;
        }
    } else {
        cout << "Las frases no coinciden hasta el quinto carácter." << endl;
    }
}


//Tema Estructuras/Registros: Es una colección de uno a más tipos de elementos denominados campos, cada uno de los 
//cuales puede ser un tipo de dato diferente.

//6 Declare una estructura llamada struct DiscoCompacto, que guarde el título, artista, numero de canciones, precio,
// año de lanzamiento. Use typedef para declarar el alias del struct como CD. Declare 3 variables de tipo DiscoCompacto,
// dos globales y una local al main. Iterar usando strlen para mostrar el nombre de cada artista, 
//solo si la longitud del artista, si es mayor a 10 letras. Luego compare si dos títulos son del mismo artista.


void ej6(){
struct DiscoCompacto{
	char titulo[60];
	char artista[30];
	int cantidad_canciones;
	float precio;
	int anio_lanzamiento;
};	

typedef struct DiscoCompacto CD;
CD cd1;
CD cd2;
CD cd3;
//cargo datos a cds:
// CD 1 
strcpy(cd1.titulo, "X&Y");
strcpy(cd1.artista,"Coldplay");
cd1.cantidad_canciones=13;
cd1.precio=9000;
cd1.anio_lanzamiento= 2005;

//CD 2
strcpy(cd2.titulo,"Signos");
strcpy(cd2.artista,"SodaStereoCeratiDios");
cd2.cantidad_canciones=8;
cd2.precio=15000;
cd2.anio_lanzamiento = 1986;

//CD 3

strcpy(cd3.titulo,"Back in Black");
strcpy(cd3.artista,"ac/dc");
cd3.cantidad_canciones=10;
cd3.precio=13000;
cd3.anio_lanzamiento = 1980;
//itero cds para imprimir artista con mas de 10 caracteres solamente... utilizando el strlen
for( int i=0; i< strlen(cd1.artista);i++ ){
	
	if(strlen(cd1.artista)>10){
		cout<< cd1.artista[i] ;
		}else{
		i= strlen(cd1.artista);
		}
		cout<<""<<endl;
	}
for( int i=0; i< strlen(cd2.artista) ;i++ ){
	if(strlen(cd2.artista) >10){
		cout<< cd2.artista[i] ;
		}else{
		i= strlen(cd2.artista);
		}
		cout<<""<<endl;
	}
for( int i=0; i< strlen(cd3.artista) ;i++ ){
	if(strlen(cd3.artista) >10){
		cout<< cd3.artista[i] ;
		}else{
		i= strlen(cd3.artista);
		}
		cout<<""<<endl;
	}
	
	if(	strcmp(cd1.artista, cd2.artista)==0 && strcmp(cd1.artista, cd3.artista)==0 ) {
			cout<<" Los albums comparados pertenecen al mismo Artista"<<endl;
	}	else{
		cout<< "Los albums no pertenecen al mismo artista"<<endl;
	}
}
//7
//Cree una estructura profesor, con nombre, cargo, materia, y carga horaria. Declare 2 profesores con estos valores 
//(fuera del main): Ej: Profe. Cristina, Titular, Gestión de datos, 20hs. Ej2: Fabiana. Jefa TP, Matemática, 15hs. 
//El registro profesor debe incluir a otro registro materia. Luego en el main, muestre ambos profesores concatenados a sus
// materias. Sugerencia getline para los char[].
void ej7(){
	struct Materia{
		
	char nombre[40];
	};
	
	struct Profesor{
	char nombre[60];
	char cargo[30];
	Materia materia;
	int carga_horaria;
	};

	Materia m1,m2;
		cout<<"Ingrese nombre materia 1 (Gestion de Datos) "<<endl;
		cin.getline(m1.nombre, 40 ,'\n');
		cout<<"Ingrese nombre materia 2 (Matematicas) "<<endl;
		cin.getline(m2.nombre, 40, '\n');
	

	Profesor p1, p2;
		//Profe Cristina
		cout<<"Ingrese nombre P1:(Cristina)"<<endl;
		cin.getline(p1.nombre, 60, '\n');
		cout<<"Ingrese cargo P1:(Titular)"<<endl;
		cin.getline(p1.cargo, 30, '\n');
		p1.materia=m1;
		p1.carga_horaria=20;
		//Profe Fabiana
		strcpy(p2.nombre,"Fabiana");
		strcpy(p2.cargo,"Jefa TP");
		p2.materia= m2;
		p2.carga_horaria=15;
	
	cout<<"Profesora : "<<p1.nombre<<endl;
	cout<<"Cargo : "<<p1.cargo<<endl;
	cout<<"Materia :"<<p1.materia.nombre<<endl;
	cout<<"Carga Horaria : "<<p1.carga_horaria<<endl;
	cout<<"********************************"<<endl;
	cout<<"Profesora : "<<p2.nombre<<endl;
	cout<<"Cargo : "<<p2.cargo<<endl;
	cout<<"Materia :"<<p2.materia.nombre<<endl;
	cout<<"Carga Horaria : "<<p2.carga_horaria<<endl;
}

//8. Cree una estructura infoDireccion con calle, ciudad, provincia. Otra estructura anida a la anterior. 
//Llamada Empleado que guarda nombre, Dirección (de tipo infoDireccion), y salario. Declare un arreglo de 
//2 empleados, y cargue las estrcuturas Empleado desde el main.

void ej8(){
	struct infoDireccion{
		char calle[60];
		char ciudad[20];
		char provincia[20];
	};
	
	struct Empleado{
		char nombre[30];
		infoDireccion direccion;
		float salario;
	};
	
	Empleado empleados[2];
}


//9. Hacer estructuras anidadas para registrar los datos de un Trabajador y de una Persona sin oficio. 
//Se guarda de las personas nombre, edad, peso, y fecha (estructura con dia, mes, anio). Un Trabajador es una estructura que guarda una persona, 
//y un salario. Declare e inicialice un ejemplo de Trabajador y Persona.
void ej9(){
	struct Fecha{
		int dia;
		int mes;
		int anio;
	};
	
	struct Persona{
		char nombre[50];
		int edad;
		double peso;
		Fecha nacimiento;
	};
	
	struct Trabajador{
		Persona datosPersona;
		double salario;
	};
	
	Persona gabriel;
	Trabajador nuevoTrabajador;
	
	strcpy(gabriel.nombre,"Gabriel");
    gabriel.edad=30;
	gabriel.peso=65;
	gabriel.nacimiento.dia=22;
	gabriel.nacimiento.mes=3;
	gabriel.nacimiento.anio=1993;	
	
	nuevoTrabajador.datosPersona= gabriel;
	nuevoTrabajador.salario= 150000;
	
	cout<<"Datos Persona. Nombre: "<<gabriel.nombre <<" Edad:"<<gabriel.edad << " Peso: "<< gabriel.peso << " Fecha Nacimiento "<<gabriel.nacimiento.dia<<"/"<<gabriel.nacimiento.mes<<"/"<<gabriel.nacimiento.anio<<endl; 
	cout<<"Datos Empleado: Nombre: " << nuevoTrabajador.datosPersona.nombre <<" Peso: "<< nuevoTrabajador.datosPersona.peso<<" Fecha Nacimiento:"<< nuevoTrabajador.datosPersona.nacimiento.dia<<"/"<< nuevoTrabajador.datosPersona.nacimiento.mes<<"/"<< nuevoTrabajador.datosPersona.nacimiento.anio<< " Salario : "<< nuevoTrabajador.salario<<endl;
	
}

//10 Hacer un programa en C++ para A) Registrar los datos de tres libros como: título, autor, año y color del libro. 
//El color se deberá hacer mediante una enumeración y sólo habrá rojo, verde y azul. B) Mostrar 3 Libros según sea su color.
void ej10() {
    enum Color {
        Rojo,
        Verde,
        Azul
    };

    struct Libro {
        char titulo[50];
        char autor[30];
        int anio;
        Color color;
    };
	//Array con elementos de tipo struct Libro
    Libro libros[3];

    // Cargar datos de los libros
    for (int i = 0; i < 3; i++) {
        cout << "Datos del libro " << i + 1 << endl;
        cout << "Titulo: ";
        cin.getline(libros[i].titulo, 50, '\n');
        cout << "Autor: ";
        cin.getline(libros[i].autor, 30, '\n');
        cout << "Anio: ";
        cin >> libros[i].anio;
        cout << "Colores: ingrese 0 para Rojo, 1 para Verde, 2 para Azul: ";
        int colorI;
        cin >> colorI;
        libros[i].color = static_cast<Color>(colorI);
        cin.ignore(); // Limpiar el búfer del teclado
    }

    string resp;
    do {
        cout << "Ingrese color (Rojo, Verde, Azul) o 's' para salir: ";
        cin >> resp;

        if (resp != "s" && resp != "S") {
            Color colorBuscado;
            if (resp == "Rojo") {
                colorBuscado = Rojo;
            } else if (resp == "Verde") {
                colorBuscado = Verde;
            } else if (resp == "Azul") {
                colorBuscado = Azul;
            } else {
                cout << "Color no válido. Intente de nuevo." << endl;
                continue; // Salta al inicio del bucle
            }

            for (int i = 0; i < 3; i++) {
                if (libros[i].color == colorBuscado) {
                    string colorStr;
                    switch (libros[i].color) {
                        case Rojo:
                            colorStr = "Rojo";
                            break;
                        case Verde:
                            colorStr = "Verde";
                            break;
                        case Azul:
                            colorStr = "Azul";
                            break;
                    }

                    cout << "Libro " << i + 1 << ": Titulo: " << libros[i].titulo
                         << ", Autor: " << libros[i].autor
                         << ", Año: " << libros[i].anio
                         << ", Color: " << colorStr << endl;
                }
            }
        }
    } while (resp != "s" && resp != "S");

    cout << "Programa finalizado. Adios." << endl;
}

//11. Hacer una estructura llamada Corredor, en la cual se tendrán los siguientes campos: Nombre, edad, sexo, club, pedir datos al usuario para un corredor, 
//y asignarle una Categoría de competición (use strcpy para copiar a la variable) según sea su categoría: 1 - Juvenil menor (hasta 18 años) 
//2- Señor menor (hasta 40 años) 3- Veterano (desde +40 años) Posteriormente imprimir todos los datos del corredor, incluida su categoría de competición.
void ej11(){
	
	struct Corredor {
		char nombre[30];
		int edad;
		char sexo[10];
		char club[15];
		char categoria[18];		
	};
	
	Corredor corre1;
	cout<<"Ingresar Datos del Corredor"<<endl;
	cout<<"Ingrese el nombre"<<endl;
    cin.getline(corre1.nombre, 30, '\n');
    cout<<"Ingrese la edad"<<endl;
    cin>>corre1.edad;
    cout<<"Ingrese el sexo"<<endl;
    cin.ignore();
    cin.getline(corre1.sexo, 10, '\n');
    cout<<"Ingrese el club"<<endl;
    cin.getline(corre1.club,15, '\n');
	if(corre1.edad<19){
		strcpy(corre1.categoria,"Juvenil Menor");
	}
	if (corre1.edad>18 && corre1.edad<41){
		strcpy(corre1.categoria,"Senior menor");
	}if( corre1.edad>40){
		strcpy(corre1.categoria,"VeteranoSport");
	}
	cout<<"Datos Corredor"<<endl;
	cout<<"Nombre: "<<corre1.nombre<<" Edad: "<<corre1.edad<< " Sexo: "<<corre1.sexo<< " Club: "<<corre1.club<< " Categoria: "<<corre1.categoria<<endl;
}


//12. Hacer una estructura llamada estudiante, en la cual se tendrán los siguientes 
//Campos: Nombre, edad, promedio, pedir datos al usuario para 3 becados, 
//comprobar cuál de los 3 tiene el mejor promedio y luego imprimir datos del becado. 
//Use strcasecmp para comparar las cadenas y determinar si sus nombres son iguales.
// Ej.: Marco Sosa y Marco Perez.

void ej12(){
	struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

    Estudiante becados[3];
    Estudiante mejorBecado;
    // mejor promedio con un valor negativo
    mejorBecado.promedio = -1.0; 

    // Pedir datos
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese los datos del becado " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin.getline(becados[i].nombre, 50, '\n');
        cout << "Edad: ";
        cin >> becados[i].edad;
        cout << "Promedio: ";
        cin >> becados[i].promedio;
        cin.ignore(); // Limpiar el búfer del teclado
    }

    //  mejor promedio
    for (int i = 0; i < 3; i++) {
        if (becados[i].promedio > mejorBecado.promedio) {
            mejorBecado = becados[i];
        }
    }

    // Mostrar los datos del mejor promedio
    cout << "El becado con el mejor promedio es:" << endl;
    cout << "Nombre: " << mejorBecado.nombre << endl;
    cout << "Edad: " << mejorBecado.edad << endl;
    cout << "Promedio: " << mejorBecado.promedio << endl;
	
}

//13. El programa de Anses pide N, y carga un arreglo de estructuras los datos de N jubilados 
//(nroCarnet, nombre y apellido, dni, edad, aportes, montoPensión). Luego que imprima:
// A- los datos del Jubilado con mayor y menor pensión. B- Aquellos Jubilados con entre 20 y 30 años 
//de aporte. C- El número de carnet de los Jubilados con pensión inferior a $90000.
void ej13(){
	struct Jubilado {
    int nroCarnet;
    char nombreApellido[50];
    int dni;
    int edad;
    int aportes;
    float montoPension;
};
    int n;

    cout << "Ingrese la cantidad de jubilados: ";
    cin >> n;

    Jubilado jubilados[n];
    Jubilado jubiladoMayorPension, jubiladoMenorPension;
    jubiladoMayorPension.montoPension = -1.0; // Inicializar la mayor pensión con un valor negativo
    jubiladoMenorPension.montoPension = 999999.0; // Inicializar la menor pensión con un valor alto

    for (int i = 0; i < n; i++) {
        cout << "Ingrese los datos del jubilado " << i + 1 << ":" << endl;
        jubilados[i].nroCarnet = i + 1;

        cout << "Nombre y Apellido: ";
        cin.ignore(); // Limpiar el búfer del teclado
        cin.getline(jubilados[i].nombreApellido, 50);

        cout << "DNI: ";
        cin >> jubilados[i].dni;

        cout << "Edad: ";
        cin >> jubilados[i].edad;

        cout << "Aportes: ";
        cin >> jubilados[i].aportes;

        cout << "Monto de Pension: ";
        cin >> jubilados[i].montoPension;

        // Verificar si es el jubilado con la mayor pensión
        if (jubilados[i].montoPension > jubiladoMayorPension.montoPension) {
            jubiladoMayorPension = jubilados[i];
        }

        // Verificar si es el jubilado con la menor pensión
        if (jubilados[i].montoPension < jubiladoMenorPension.montoPension) {
            jubiladoMenorPension = jubilados[i];
        }
    }

    cout << "Datos del Jubilado con mayor pension son:" << endl;
    cout << "Numero de Carnet: " << jubiladoMayorPension.nroCarnet << endl;
    cout << "Nombre y Apellido: " << jubiladoMayorPension.nombreApellido << endl;
    cout << "DNI: " << jubiladoMayorPension.dni << endl;
    cout << "Edad: " << jubiladoMayorPension.edad << endl;
    cout << "Aportes: " << jubiladoMayorPension.aportes << endl;
    cout << "Monto de Pension: " << jubiladoMayorPension.montoPension << endl;

    cout << "Datos del Jubilado con menor pension son:" << endl;
    cout << "Numero de Carnet: " << jubiladoMenorPension.nroCarnet << endl;
    cout << "Nombre y Apellido: " << jubiladoMenorPension.nombreApellido << endl;
    cout << "DNI: " << jubiladoMenorPension.dni << endl;
    cout << "Edad: " << jubiladoMenorPension.edad << endl;
    cout << "Aportes: " << jubiladoMenorPension.aportes << endl;
    cout << "Monto de Pension: " << jubiladoMenorPension.montoPension << endl;

    int jubiladosConAportes2025 = 0;
    int jubiladosConPensionMenor90000 = 0;

    for (int i = 0; i < n; i++) {
        if (jubilados[i].aportes >= 20 && jubilados[i].aportes <= 30) {
            jubiladosConAportes2025++;
        }

        if (jubilados[i].montoPension < 90000) {
            jubiladosConPensionMenor90000++;
        }
	
}
}
//14. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, país, numero_medallas. 
//En el main pedir que digite el número de atletas, y a medida que los carga, devuelva los datos (Nombre, país) del atleta que ha ganado 
//el mayor ‘número de medallas’.
void ej14(){
	int cant;
	cout<<"Ingrese la cantidad de Atletas"<<endl;
	cin>>cant;
	cin.ignore();
	
	struct Atleta{
		char nombre[15];
		char pais[15];
		int num_medallas;
	};
	
	Atleta atletas[cant];
	int champion=0;
	for(int i=0;i<cant; i++){
		cout<<"Ingrese nombre:"<<endl;
		cin.getline(atletas[i].nombre, 15, '\n' );
		cout<<"Ingrese pais:"<<endl;
		cin.getline(atletas[i].pais, 15, '\n'); 
		
		cout<<"Ingrese cantidad de medallas"<<endl;
		cin>> atletas[i].num_medallas;
		cin.ignore();
		if( atletas[i].num_medallas > champion){
			champion= atletas[i].num_medallas;
			cout<<"***Record medallas***"<<endl;
			cout<<"Nombre: "<< atletas[i].nombre<<endl;
			cout<<"Pais: "<< atletas[i].pais<<endl;
			cout<<"Cantidad Medallas: "<< atletas[i].num_medallas<<endl;
		}
	}
}

//15 - Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos decimal: nota1, nota2, nota3; y otro llamada
//alumno que tendrá los siguientes miembros: matricula, nombre, sexo, asistencia; hacer que la estructura promedio este
//anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y por último
//imprimir sus datos incluido su promedio. Calcular cuál de 2 alumnos tiene el mejor promedio, y mostrar el nombre.
void ej15(){
struct Promedio{
	double nota1;
	double nota2;
	double nota3;
};
struct Alumno{
	int matricula;
	char nombre[30];
	char sexo[10];
	int asistencia;
	Promedio calificaciones;
};
	Alumno alumno1, alumno2;

    // Pedir datos del primer alumno
    cout << "Ingrese los datos del primer alumno:" << endl;
    cout << "Matricula: ";
    cin >> alumno1.matricula;
    cout << "Nombre: ";
    // Limpiar el buffer del teclado antes de leer el nombre
    cin.ignore(); 
    cin.getline(alumno1.nombre, 30, '\n');
    cout << "Sexo (M/F): ";
    cin >> alumno1.sexo;
    cout << "Asistencia: ";
    cin >> alumno1.asistencia;
    cout << "Nota 1: ";
    cin >> alumno1.calificaciones.nota1;
    cout << "Nota 2: ";
    cin >> alumno1.calificaciones.nota2;
    cout << "Nota 3: ";
    cin >> alumno1.calificaciones.nota3;

    // Calcular el promedio del primer alumno
    float promedio_alumno1 = (alumno1.calificaciones.nota1 + alumno1.calificaciones.nota2 + alumno1.calificaciones.nota3) / 3.0;

    // Pedir datos del segundo alumno
    cout << "\nIngrese los datos del segundo alumno:" << endl;
    cout << "Matricula: ";
    cin >> alumno2.matricula;
    cout << "Nombre: ";
    cin.ignore();
    cin.getline(alumno1.nombre, 30, '\n' );
    cout << "Sexo (M/F): ";
    cin >> alumno2.sexo;
    cout << "Asistencia: ";
    cin >> alumno2.asistencia;
    cout << "Nota 1: ";
    cin >> alumno2.calificaciones.nota1;
    cout << "Nota 2: ";
    cin >> alumno2.calificaciones.nota2;
    cout << "Nota 3: ";
    cin >> alumno2.calificaciones.nota3;

    // Calcular el promedio del segundo alumno
    float promedio_alumno2 = (alumno2.calificaciones.nota1 + alumno2.calificaciones.nota2 + alumno2.calificaciones.nota3) / 3.0;

    // Mostrar los datos de ambos alumnos y calcular mejor promedio...
    cout << "\nDatos del primer alumno:" << endl;
    cout << "Matricula: " << alumno1.matricula << endl;
    cout << "Nombre: " << alumno1.nombre << endl;
    cout << "Sexo: " << alumno1.sexo << endl;
    cout << "Asistencia: " << alumno1.asistencia << endl;
    cout << "Promedio: " << promedio_alumno1 << endl;

    cout << "\nDatos del segundo alumno:" << endl;
    cout << "Matricula: " << alumno2.matricula << endl;
    cout << "Nombre: " << alumno2.nombre << endl;
    cout << "Sexo: " << alumno2.sexo << endl;
    cout << "Asistencia: " << alumno2.asistencia << endl;
    cout << "Promedio: " << promedio_alumno2 << endl;

    //  mejor promedio
    if (promedio_alumno1 > promedio_alumno2) {
        cout << "\nEl primer alumno tiene el mejor promedio." << endl;
    } else if (promedio_alumno2 > promedio_alumno1) {
        cout << "\nEl segundo alumno tiene el mejor promedio." << endl;
    } else {
        cout << "\nAmbos alumnos tienen el mismo promedio." << endl;
    }

};



//Defina una estructura Etapa, que indique el tiempo empleado por un ciclista en una etapa. 
//Debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado n etapas 
//calcule el tiempo total empleado por el Ciclista en completar todas y cada una de las etapas. 
//Mostrar para 3 de ellos, nombre completo, medallas, y tiempos en las etapas.
void ej16(){
// Definición de la estructura Etapa
struct Etapa {
    int horas;
    int minutos;
    int segundos;
    char medalla[50];
};

struct Ciclista{
		char nombre[30];
		char apellido[30];
		Etapa etapas[];
	}; 
    int n,nCiclistas;
    cout << "Ingrese el numero de etapas: ";
    cin >> n;

    // Declarar un arreglo de Etapa para almacenar los tiempos de cada etapa
    Etapa etapas[n];
    //Declarar un arreglo de Cilistas para almacenar sus datos
    Ciclista ciclistas[3];

    // Leer  tiempos de cada etapa
    for (int i = 0; i < n; i++) {
    	// ingreso 3 ciclistas para imprimir en pantalla al final
		if(i<3){
			cout<<"Ingrese el nombre del ciclista";
			cin.getline(ciclistas[i].nombre, 30, '\n' ); 
			cout<<"Ingrese el apellido del ciclista";
			cin.getline(ciclistas[i].apellido, 30, '\n' ); 	
			
    	cout << "Ingrese el tiempo para la etapa " << i + 1 << " (horas minutos segundos): ";
        cin >> etapas[i].horas >> etapas[i].minutos >> etapas[i].segundos;
        cout << "Ingrese la medalla que gano el ciclista(bronce,plata,oro)"<<endl;
    	cin.getline(etapas[i].medalla, 50, '\n');
		}else {
		strcpy(ciclistas[i].nombre, "Corredor");
    	strcpy(ciclistas[i].apellido, "Anonimo");
        cout << "Ingrese el tiempo para la etapa " << i + 1 << " (horas minutos segundos): ";
        cin >> etapas[i].horas >> etapas[i].minutos >> etapas[i].segundos;
        cout << "Ingrese la medalla que gano el ciclista(bronce,plata,oro)"<<endl;
    	cin.getline(etapas[i].medalla, 50, '\n');
		}

    }

    // Calcular el tiempo total empleado por el ciclista
    int totalHoras = 0, totalMinutos = 0, totalSegundos = 0;
    for (int i = 0; i < n; i++) {
        totalHoras += etapas[i].horas;
        totalMinutos += etapas[i].minutos;
        totalSegundos += etapas[i].segundos;
    }

    // Ajustar los minutos y segundos si es necesario
    totalMinutos += totalSegundos / 60;
    totalSegundos %= 60;
    totalHoras += totalMinutos / 60;
    totalMinutos %= 60;

    cout << "\nTiempo total empleado por el ciclista: " << totalHoras << " horas, " << totalMinutos << " minutos, " << totalSegundos << " segundos.\n";

	
    // Mostrar detalles de los 3 ciclistas
    cout << "\nDetalles para los 3 ciclistas:\n";
    for (int i = 0; i < 3; i++) {
        cout <<"Ciclista: "<<ciclistas[i].nombre<<" "<<ciclistas[i].apellido<<", Etapa " << i + 1 << ": " << etapas[i].horas << " horas, " << etapas[i].minutos << " minutos, " << etapas[i].segundos << " segundos.\n";
    }

}
//17. Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos: el nombre de la persona y 
//un valor de tipo lógico que indica si la persona tiene algún tipo de discapacidad. Realice un programa que dado un vector de personas 
//rellene dos nuevos vectores: uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad.
void ej17(){
	struct Persona{
		char nombre[30];
		bool capacidadDiferente;
	};
	Persona personas[4];
	Persona personas1[2];
	Persona personas0[2];
	
	personas[0].capacidadDiferente=false;
	strcpy(personas[0].nombre,"pepe argento");
	
	personas[1].capacidadDiferente=true;
	strcpy(personas[0].nombre,"Dardo Fuseneco");
	
	personas[1].capacidadDiferente=true;
	strcpy(personas[0].nombre,"Gustavo Cerati");
	
	personas[0].capacidadDiferente=false;
	strcpy(personas[0].nombre,"Maria Sosa");
	
	for(int i=0; i<4;i++){
		if( personas[i].capacidadDiferente==1){
			strcpy(personas1[i].nombre,personas[i].nombre);
		}else{
			(personas0[i].nombre, personas[i].nombre);
		}
	}
}

//18. Defina una estructura que permita cargar el día y las temperaturas máxima y mínima de ese día. 
//Luego defina un arreglo en el que cargara todos estos datos para un mes. Realice un programa que cargue la 
//estructura antes definida y calcule el promedio de temperaturas máximas y el promedio de temperaturas mínimas del mes.
void ej18(){

struct Dia{
	int nDia;
	double tempMin;
	double tempMax;
	
};
cout<<"Ingrese la cantidad de dias del mes ";
int dias;
cin>> dias;
//Array mes con structs dia
Dia mes[dias];

//Cargar datos temperaturas min y max de cada dia
for(int i=0; i<dias;i++){
	cout<<"Temperaturas del dia "<<i+1<<endl;
	cout<<"Ingrese Temp Min del dia"<<endl;
	cin>> mes[i].tempMin;
	cout<<"Ingrese Temp Max del dia"<<endl;
	cin>> mes[i].tempMax;
}

//Calcular promedio del min
double promedioMin=0.00;
for(int i=0; i<dias;i++){
	promedioMin += mes[i].tempMin;
}
promedioMin/=dias;
cout<<"La Temperatura promedio min del mes es = "<<promedioMin;

//Calcular promedio del max
double promedioMax=0.00;
for(int i=0; i<dias;i++){
	promedioMax += mes[i].tempMax;
}
promedioMax/=dias;
cout<<"La Temperatura promedio max del mes es = "<<promedioMax;

}

//19. En un comercio trabajan 6 vendedores. Defina la estructura principal vendedor se dese saber: nombre, legajo, sector.
//Se guardan sus ventas clasificadas por rubro, por lo que debes hacer un array de estructuras ventas con códigos 
//01 al 04, concepto: bazar, accesorios, indumentaria, calzados; y de cada una su total vendido. El vendedor asocia sus ventas_rubro
//Realice un programa que permita:
//a. Cargar los datos de un arreglo de 3 vendedores, con sus ventas en rubro
//b. Mostrar por cada vendedor, las ventas en cada rubro (esta información debe ser almacenada en la segunda estructura)

void ej19() {
struct VentaRubro {
    int codigo;
    string concepto;
    double totalVendido;
};

struct Vendedor {
    string nombre;
    int legajo;
    string sector;
    // arreglo para las ventas en cada rubro
    VentaRubro ventas_rubro[4]; 
};

    Vendedor vendedores[6];

    int codigos[] = {1, 2, 3, 4};
    string conceptos[] = {"bazar", "accesorios", "indumentaria", "calzados"};

    // Cargar datos de vendedores y ventas en rubros
    for (int i = 0; i < 6; i++) {
        cout << "Ingrese los datos del vendedor " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> vendedores[i].nombre;
        cout << "Legajo: ";
        cin >> vendedores[i].legajo;
        cout << "Sector: ";
        cin >> vendedores[i].sector;

        // Cargar ventas en rubros
        for (int j = 0; j < 4; j++) {
            vendedores[i].ventas_rubro[j].codigo = codigos[j];
            vendedores[i].ventas_rubro[j].concepto = conceptos[j];
            cout << "Ventas en " << conceptos[j] << ": ";
            cin >> vendedores[i].ventas_rubro[j].totalVendido;
        }
    }

    // Mostrar las ventas por cada vendedor en cada rubro
    for (int i = 0; i < 6; i++) {
        cout << "\nVentas del vendedor " << vendedores[i].nombre << " (Legajo " << vendedores[i].legajo << ") en cada rubro:" << endl;
        for (int j = 0; j < 4; j++) {
            cout << "Rubro: " << vendedores[i].ventas_rubro[j].concepto << ", Ventas: " << vendedores[i].ventas_rubro[j].totalVendido << endl;
        }
    }
}

//Una empresa necesita el registro tanto de sus Empleados, como de sus Clientes, de ambos requiere los datos de su domicilio 
//Ej. provincia en que viven, el barrio, la calle, y altura, si esEdificio o no. Además de sus empleados guardamos el legajo, su puesto, y su sueldo. 
//Plantearlo con estructuras anidadas, si además tenemos del Cliente el nombre, correo, teléfono, y domicilio de residencia. 
//a. Donde viven los 10 clientes, y su nombre.
//b. Datos de los Empleados con sueldos de más de $50000
//c. Correo y teléfono, de clientes que viven en edificio
//d. Datos de los Empleados con puesto de vendedor
//e. Reemplazar el nro. de legajo, por un registro: nroLegajo, nombre, apellido, y antigüedad
void ej20(){
	
	//e. Reemplazar el nro. de legajo, por un registro: nroLegajo, nombre, apellido, y antigüedad
struct Registro{
	int nroLegajo;
	char nombre[20];
	char apellido[20];
    int antiguedad;
};

struct Domicilio{
	char provincia[20];
	char barrio[20];
	char calle[20];
	int altura;
	bool esEdificio;
};	

struct Empleado{
	char puesto[30];
	double sueldo;
	Domicilio domicilio;
	Registro registro;
};
		
struct Cliente{
	char nombre[30];
	char correo[50];
	int telefono;
	Domicilio domicilio;
};



//Luego CARGAR arreglos de 10 clientes y 5 empleados. Luego Mostrar en consola:
Cliente clientes[10];
Empleado empleados[5];

// 10 clientes...
		strcpy(clientes[0].nombre,"German Torrez");
		strcpy(clientes[0].correo,"GermanTorrez@gmail.com");
		clientes[0].telefono= 2664325453;
		strcpy(clientes[0].domicilio.provincia,"San Luis");
		strcpy(clientes[0].domicilio.barrio,"Otro");
		strcpy(clientes[0].domicilio.calle,"Sucre");
		clientes[0].domicilio.altura= 123;
		clientes[0].domicilio.esEdificio= true;

		
		strcpy(clientes[1].nombre,"Julia Torrez");
		strcpy(clientes[1].correo,"JuliaTorrez@gmail.com");
		clientes[1].telefono= 2664325465;
		strcpy(clientes[1].domicilio.provincia,"San Luis");
		strcpy(clientes[1].domicilio.barrio,"Rawson");
		strcpy(clientes[1].domicilio.calle,"Julio A. Roca");
		clientes[1].domicilio.altura= 1295;
		clientes[1].domicilio.esEdificio= false;
		
		strcpy(clientes[2].nombre,"Pepe Argento");
		strcpy(clientes[2].correo,"PepeRacing@gmail.com");
		clientes[2].telefono= 2664123456;
		strcpy(clientes[2].domicilio.provincia,"Bs As");
		strcpy(clientes[2].domicilio.barrio,"Flores");
		strcpy(clientes[2].domicilio.calle,"La calle Argento");
		clientes[2].domicilio.altura= 7654;
		clientes[2].domicilio.esEdificio= false;

 		strcpy(clientes[3].nombre,"Gabriel Torrez");
		strcpy(clientes[3].correo,"gabrieltorrez9303@gmail.com");
		clientes[3].telefono= 2664325477;
		strcpy(clientes[3].domicilio.provincia,"San Luis");
		strcpy(clientes[3].domicilio.barrio,"uocra");
		strcpy(clientes[3].domicilio.calle,"M52 C12");
		clientes[3].domicilio.altura= 5710;
		clientes[3].domicilio.esEdificio= false;

		strcpy(clientes[4].nombre,"Charly Garcia");
		strcpy(clientes[4].correo,"Charly@gmail.com");
		clientes[4].telefono= 12345676;
		strcpy(clientes[4].domicilio.provincia,"Buenos Aires");
		strcpy(clientes[4].domicilio.barrio,"Por algun lugar");
		strcpy(clientes[4].domicilio.calle,"En alguna calle");
		clientes[4].domicilio.altura= 1234;
		clientes[4].domicilio.esEdificio= false;

		strcpy(clientes[5].nombre,"Lionel Messi");
		strcpy(clientes[5].correo,"elpulga_lio@gmail.com");
		clientes[5].telefono= 10101010;
		strcpy(clientes[5].domicilio.provincia,"Santa Fe");
		strcpy(clientes[5].domicilio.barrio,"Rosario");
		strcpy(clientes[5].domicilio.calle,"Calle 10");
		clientes[5].domicilio.altura= 456;
		clientes[5].domicilio.esEdificio= true;

		strcpy(clientes[6].nombre,"Mono Kapanga");
		strcpy(clientes[6].correo,"mono_bailen@gmail.com");
		clientes[6].telefono= 2664123123;
		strcpy(clientes[6].domicilio.provincia,"Cordoba");
		strcpy(clientes[6].domicilio.barrio,"Carlos Paz");
		strcpy(clientes[6].domicilio.calle,"San Martin");
		clientes[6].domicilio.altura= 1113;
		clientes[6].domicilio.esEdificio= false;

		strcpy(clientes[7].nombre,"El Yayo");
		strcpy(clientes[7].correo,"yayo_elsutil@gmail.com");
		clientes[7].telefono= 2665768798;
		strcpy(clientes[7].domicilio.provincia,"Cordoba");
		strcpy(clientes[7].domicilio.barrio,"Capital");
		strcpy(clientes[7].domicilio.calle,"Riobamba");
		clientes[7].domicilio.altura= 1300;
		clientes[7].domicilio.esEdificio= true;
		
		strcpy(clientes[8].nombre,"Horacio Guarani");
		strcpy(clientes[8].correo,"Horacio_guarani@gmail.com");
		clientes[8].telefono= 2664877665;
		strcpy(clientes[8].domicilio.provincia,"Misiones");
		strcpy(clientes[8].domicilio.barrio,"El dorado");
		strcpy(clientes[8].domicilio.calle,"Bolivar");
		clientes[8].domicilio.altura= 500;
		clientes[8].domicilio.esEdificio= false;

		strcpy(clientes[9].nombre,"Ciro Martinez");
		strcpy(clientes[9].correo,"Ciro_piojoso@gmail.com");
		clientes[9].telefono= 789456789;
		strcpy(clientes[9].domicilio.provincia,"Tierra del Fuego");
		strcpy(clientes[9].domicilio.barrio,"Usuahia");
		strcpy(clientes[9].domicilio.calle,"Ayacucho");
		clientes[9].domicilio.altura= 123;
		clientes[9].domicilio.esEdificio= false;

		//5 Empleados...
	
		strcpy(empleados[0].puesto,"vendedor");
		empleados[0].sueldo= 250.000;
		strcpy(empleados[0].domicilio.provincia,"San Luis");
		strcpy(empleados[0].domicilio.barrio,"Norte");
		strcpy(empleados[0].domicilio.calle,"Belgrano");
		empleados[0].domicilio.altura= 125;
		empleados[0].domicilio.esEdificio= false;
		strcpy(empleados[0].registro.nombre,"Facundo");
		strcpy(empleados[0].registro.apellido,"Cabral");
		empleados[0].registro.nroLegajo= 1;
		empleados[0].registro.antiguedad=3;
		
		
		strcpy(empleados[1].puesto,"vendedor");
		empleados[1].sueldo= 250.000;
		strcpy(empleados[1].domicilio.provincia,"San Luis");
		strcpy(empleados[1].domicilio.barrio,"Norte");
		strcpy(empleados[1].domicilio.calle,"Junin");
		empleados[1].domicilio.altura= 2100;
		empleados[1].domicilio.esEdificio= false;
		strcpy(empleados[1].registro.nombre,"Esteban");
		strcpy(empleados[1].registro.apellido,"Gomez");
		empleados[1].registro.nroLegajo= 2;
		empleados[1].registro.antiguedad=3;
		
	
		strcpy(empleados[2].puesto,"vendedora");
		empleados[2].sueldo= 250.000;
		strcpy(empleados[2].domicilio.provincia,"San Luis");
		strcpy(empleados[2].domicilio.barrio,"Oeste");
		strcpy(empleados[2].domicilio.calle,"Av. Rosario");
		empleados[2].domicilio.altura= 420;
		empleados[2].domicilio.esEdificio= false;
		strcpy(empleados[0].registro.nombre,"Luciana");
		strcpy(empleados[0].registro.apellido,"Fernandez");
		empleados[0].registro.nroLegajo= 3;
		empleados[0].registro.antiguedad=5;
	
	
		
	
		strcpy(empleados[3].puesto,"encargado deposito");
		empleados[3].sueldo= 300.000;
		strcpy(empleados[3].domicilio.provincia,"San Luis");
		strcpy(empleados[3].domicilio.barrio,"Norte");
		strcpy(empleados[3].domicilio.calle,"Junin");
		empleados[3].domicilio.altura= 2100;
		empleados[3].domicilio.esEdificio= false;
		strcpy(empleados[0].registro.nombre,"Damian");
		strcpy(empleados[0].registro.apellido,"Lopez");
		empleados[0].registro.nroLegajo= 4;
		empleados[0].registro.antiguedad=9;
		
			
	
		strcpy(empleados[4].puesto,"gerente");
		empleados[4].sueldo= 400.000;
		strcpy(empleados[4].domicilio.provincia,"San Luis");
		strcpy(empleados[4].domicilio.barrio,"Sur");
		strcpy(empleados[4].domicilio.calle,"Alguna calle");
		empleados[4].domicilio.altura= 123;
		empleados[4].domicilio.esEdificio= false;
		strcpy(empleados[0].registro.nombre,"Lautaro");
		strcpy(empleados[0].registro.apellido,"Gomez");
		empleados[0].registro.nroLegajo= 5;
		empleados[0].registro.antiguedad=10;

//a) donde viven los 10 clientes y su nombre
	cout<<"Donde viven los 10 clientes y su nombre"<<endl;
	for(int i=0; i<10;i++){
		cout<<"Nombre: "<<clientes[i].nombre<<" Domicilio: Provincia: "<<clientes[i].domicilio.provincia<<" Barrio: "<<clientes[i].domicilio.barrio<<" Calle: "<<clientes[i].domicilio.calle<<" Altura: "<<clientes[i].domicilio.altura<< " Es edificio: "<<clientes[i].domicilio.esEdificio<<endl; 
	}
 	cout<<"b. Datos de los Empleados con sueldos de más de $50000"<<endl;
 	for(int i=0;i<5;i++){
 		if(empleados[i].sueldo>50000) {
			cout<<"Nombre y Apellido: "<<empleados[i].registro.nombre<<" "<<empleados[i].registro.apellido<<" Legajo: "<<empleados[i].registro.nroLegajo<<" Antiguedad: "<< empleados[i].registro.antiguedad << " Puesto: "<<empleados[i].puesto<<" Sueldo: "<<empleados[i].sueldo<<" Domicilio-Provincia : "<<empleados[i].domicilio.provincia<<" Barrio: "<<empleados[i].domicilio.barrio<<" Calle: "<<empleados[i].domicilio.calle<<" Altura: "<<empleados[i].domicilio.altura<<" Es edificio: "<<empleados[i].domicilio.esEdificio<<endl;
	 		}
 	}
 	cout<<"c. Correo y teléfono, de clientes que viven en edificio"<<endl;
		for(int i=0; i<10;i++){
		if(clientes[i].domicilio.esEdificio==1){
			cout<<"Nombre: "<<clientes[i].nombre<<" Correo: "<<clientes[i].correo<<" Telefono: "<<clientes[i].telefono<<endl;
		}
}	 

	cout<<"d. Datos de los Empleados con puesto de vendedor "<<endl;
		for(int i=0; i<10;i++){
		int cumpleM=-1;
		int cumpleF=-1;
		cumpleM=strcmp(empleados[i].puesto,"vendedor");
		cumpleF=strcmp(empleados[i].puesto,"vendedora");
			if(cumpleM==0 || cumpleF==0)
				{
					cout<<"Nombre y Apellido: "<<empleados[i].registro.nombre<<" "<<empleados[i].registro.apellido<<" Legajo: "<<empleados[i].registro.nroLegajo<<" Antiguedad "<<empleados[i].registro.antiguedad<<" Puesto: "<<empleados[i].puesto<<" Sueldo: "<<empleados[i].sueldo<<" Domicilio-Provincia : "<<empleados[i].domicilio.provincia<<" Barrio: "<<empleados[i].domicilio.barrio<<" Calle: "<<empleados[i].domicilio.calle<<" Altura: "<<empleados[i].domicilio.altura<<" Es edificio: "<<empleados[i].domicilio.esEdificio<<endl;
				}
		}



}
int main(){


//ultima llave y return
//ej1();
//ej2();
//ej3();
//ej4();
//ej5();
//ej6();
//ej7();
//ej8();
//ej9();
//ej10();
//ej11();
//ej12();
//ej13();
//ej14();
//ej15();
//ej16();
//ej17();
//ej18();
//ej19();
//ej20();
	return 0;
}
   







