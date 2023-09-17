#include <iostream>
using namespace std;


struct fecha {
    int dia, mes, anio;
};

struct persona {
    char nombre[20];
    int edad;
    int peso;
    fecha fechaNacimiento;
    char dni[9];
};

// Punto 1.B)
struct empleado {
    persona datosPersonales; 
    double salario;
    fecha fechaContratacion;
};

int main() {
    // Creo 2 variable del tipo Struct = persona(vacia)
    persona pers1, pers2, pers3;
    cout << "PUNTO 1) Cargando Datos :" << endl;
    cout << " Ingrese el nombre (Veronica): ";
    cin >> pers1.nombre;
    cout << "Ingrese edad (20): ";
    cin >> pers1.edad;
    cout << "Ingrese peso (45): ";
    cin >> pers1.peso;
    cout << "Ingrese Fecha de nacimiento:" << endl;
    cout << "Ingrese DIA (2): ";
    cin >> pers1.fechaNacimiento.dia;
    cout << "Ingrese MES (12): ";
    cin >> pers1.fechaNacimiento.mes;
    cout << "Ingrese ANIO (1997): ";
    cin >> pers1.fechaNacimiento.anio;

    // Punto 2)
    // Cargo datos Esteban:
    // Usamos strcpy para asignar una cadena de caracteres
    strcpy(pers2.nombre, "Esteban"); 
    pers2.edad = 19;
    pers2.peso = 60;
    pers2.fechaNacimiento.dia = 22;
    pers2.fechaNacimiento.mes = 7;
    pers2.fechaNacimiento.anio = 1998;
    
    strcpy(pers3.nombre, "Dibu");
    pers3.edad= 34;
    pers3.peso= 70;
    pers3.fechaNacimiento.dia= 4;
    pers3.fechaNacimiento.mes= 5;
    pers3.fechaNacimiento.anio=6;

    // Para poder asignarle un sueldo, debe ser un Empleado:
    empleado emp1,emp2,emp3;
     // Asignamos la persona a los datos personales del empleado
    emp1.datosPersonales = pers2;
    emp1.salario = 351.667,19;
    emp1.fechaContratacion.dia = 30;
    emp1.fechaContratacion.mes = 12;
    emp1.fechaContratacion.anio = 2019;
    
    emp2.datosPersonales =pers1;
    emp2.salario = 500.000;
    emp2.fechaContratacion.dia=15;
    emp2.fechaContratacion.mes=2;
    emp2.fechaContratacion.anio=2015;
    
    emp3.datosPersonales = pers3;
    emp3.salario = 190.000;
    emp3.fechaContratacion.dia=3;
    emp3.fechaContratacion.mes=3;
    emp3.fechaContratacion.anio=2023;

    // Punto 3)
    // Mostrar por pantalla a Veronica y Esteban:
    cout << "Datos de Veronica:" << endl;
    cout << "Nombre: " << pers1.nombre << endl;
    cout << "Edad: " << pers1.edad << endl;
    cout << "Peso: " << pers1.peso << endl;
    cout << "Fecha de Nacimiento: " << pers1.fechaNacimiento.dia << "/"
         << pers1.fechaNacimiento.mes << "/"
         << pers1.fechaNacimiento.anio << endl;

    cout << "\nDatos de Esteban:" << endl;
    cout << "Nombre: " << emp1.datosPersonales.nombre << endl;
    cout << "Edad: " << emp1.datosPersonales.edad << endl;
    cout << "Peso: " << emp1.datosPersonales.peso << endl;
    cout << "Fecha de Nacimiento: " << emp1.datosPersonales.fechaNacimiento.dia << "/"
         << emp1.datosPersonales.fechaNacimiento.mes << "/"
         << emp1.datosPersonales.fechaNacimiento.anio << endl;
         
    // Mostrar por pantalla el salario con formato completo
    cout << "Salario: " << emp1.salario << endl;

	//Punto 4) 
	struct empleado trabajadoresLista [3];
	trabajadoresLista[0]=emp1;
	trabajadoresLista[1]=emp2;
	trabajadoresLista[2]=emp3;
	for( int i=0; i< 3 ;i++){
		cout<< "Datos empleado: "<< trabajadoresLista[i].datosPersonales.nombre << " DNI: " << trabajadoresLista[i].datosPersonales.dni << 	" FechaNac :" << trabajadoresLista[i].datosPersonales.fechaNacimiento.dia<<"/"<<trabajadoresLista[i].datosPersonales.fechaNacimiento.mes<<"/"<<trabajadoresLista[i].datosPersonales.fechaNacimiento.anio
 << " Peso : " << trabajadoresLista[i].datosPersonales.peso << " Edad : " << trabajadoresLista[i].datosPersonales.edad << " Salario : " <<trabajadoresLista[i].salario << " Fecha contratacion : "<<	trabajadoresLista[i].fechaContratacion.dia<<"/"<<trabajadoresLista[i].fechaContratacion.mes<<"/"<<trabajadoresLista[i].fechaContratacion.anio
  <<endl;
	}
    // Última llave y return
    return 0;
}



