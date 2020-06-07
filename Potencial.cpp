#include <iostream>
#include <cmath>
#define Pi   3.14159265358979323846
using namespace std;

int main() {
	//Recordando como programar en C++
	//cout<<""<<endl;   <-- Plantilla
	cout<<"Bienvenido, este es un programa para computar valores de voltaje de Funcion #1"<<endl;
	cout<<" Ingrese el numero de iteraciones que desea "<<endl;
	int iteraciones;
	cin >> iteraciones;
	cout<<"Usted escogio "<<iteraciones<<" iteraciones"<<endl;
	
	cout<<" Ingrese a "<<endl;
	int a;
	cin >>a;
	
	cout<<" Ingrese b"<<endl;
	int b;
	cin >>b;
	
	//cout<<" Ingrese cuadricula "<<endl;
	//int cuadricula;
	//cin >>cuadricula;
	
	//double intervalo_x = (a/cuadricula);
	//double intervalo_y = (b/cuadricula);
	
	cout<<"Intervalo X de 0 a "<< a <<endl;
	cout<<"Intervalo Y de 0 a "<< b <<endl;
	
	
	
	//cout<<" La cuadricula en x sera "<< intervalo_x <<endl;
	//cout<<" La cuadricula en y sera "<< intervalo_y <<endl;
		
	
	double Voltaje;
	double final = 0;
	int i = 1;
	
	// OJO si queres que evalue de 0 al parametro, hay que cambiar los ciclos for de J y K
	for (float j = 0; j <= a; j +=0.1){ //j +=intervalo_x
			//cout << "Valor en X ="<<j<<endl;
			for (float k = 0 ; k <= b; k+=0.1){ //k+=intervalo_y
				// Yo ya tengo las parejas y la impresion de datos.
				// X -> j y Y -> k
				
				//cout<< j << "," << k << endl;
				//for (int i = 1;i <= (iteraciones); i+=2){
				Voltaje = ( (    (exp(  (-i*Pi*j) /b ))*( sin(  (i*Pi*k)/b  )  )) /   i) ;
				//final = final + Voltaje;
				//}
				cout << Voltaje << ",";
				
			}
			cout<< endl;
		}
	//final = final + Voltaje;
	
	
	
	
	int numero = cos(Pi);
	int numero_2 = sinh(0);
	cout<<numero<<endl;
	cout<<numero_2<<endl;


	return 0;
}
