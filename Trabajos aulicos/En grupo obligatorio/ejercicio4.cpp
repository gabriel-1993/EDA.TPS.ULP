//4. Realice un programa que lea un número por teclado y luego las operaciones a realizar de la forma: ----------
//A. math.log (x[, base]) Con un argumento, retorna el logaritmo natural de x (en base e)
//B. math.log2(x) Retorna el logaritmo en base 2 de x. Esto suele ser más preciso que log(x, 2).
//C. math.log10(x) Retorna el logaritmo en base 10 de x. Esto suele ser más preciso que log(x, 10).
//D. Devolver la constante p. La constante matemática p = 3.141592…, hasta la precisión disponible de Math.
//E. Devolver la constante matemática e = 2.718281…, hasta la precisión disponible de Math. 

//Sala 5
//Gabriel Torres
//Ramiro Moran
//Joaquin Gomez Gonzalo
//Silver Mateo Cardona

#include <iostream>
#include <cmath>
using namespace std;



int main (){
	
	int x,j;
	bool salir=false;
	long double num,resultado;
	
	do{
		
		cout<<"Ingrese que operacion desea hacer; \n";
		cout<<"1)logaritmo natural de x. \n";
		cout<<"2)logaritmo en base 2 de x. \n";
		cout<<"3)Retorna el logaritmo en base 10 de x. \n";
		cout<<"4)Devolver la constante pi = 3.141592... hasta la precision disponible.\n";
		cout<<"5)Devolver la constante matematica e = 2.718281... hasta la precision disponible. \n";
		cout<<"6)Salir. \n";
	
		cin>>x;
		system("cls");
		switch(x){
			case 1:{
				cout<<"ingrese un numero para ver su logaritmo natural \n";
				cin>>num;			
				resultado = log(num);					
				cout<<"El resulado del logaritmo natural de "<<num<<" es: \n"<<resultado<<endl<<endl;;
				break;
			}
		
			case 2:{
				cout<<"ingrese un numero para ver su logaritmo en base 2 \n";
				cin>>num;			
				resultado = log2(num);					
				cout<<"El resulado del logaritmo en base 2 de "<<num<<" es: \n"<<resultado<<endl<<endl;;
			break;
			}
			case 3:{
				cout<<"ingrese un numero para ver su logaritmo en base 10 \n";
				cin>>num;			
				resultado = log10(num);					
				cout<<"El resulado del logaritmo en base 10 de "<<num<<" es: \n"<<resultado<<endl<<endl;;
			break;
			}
			case 4:{
				cout<<"El valor maximo que se puede mostrar de pi es \n";
				cout.precision(456);
				cout<<M_PI<<endl;
				cout<<"El valor minimo que se puede mostrar de pi es \n";
				cout.precision(0);
				cout<<M_PI<<endl<<endl;;
			break;
			}
			case 5:{
			cout<<"El valor maximo que se puede mostrar de E es \n";
				cout.precision(456);
				cout<<M_E<<endl;
				cout<<"El valor minimo que se puede mostrar de E es \n";
				cout.precision(0);
				cout<<M_E<<endl<<endl;
			break;
			}
			case 6:{
				salir=true;
			break;
			}
			default:{
				cout<<"El valor ingresado no esta disponible";
			break;
			}
		};
	}while(salir!=true);
	
	
	
	system("pause");
	return 0;
}
