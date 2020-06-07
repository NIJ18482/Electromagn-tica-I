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
	
	cout<<" Ingrese cuadricula "<<endl;
	int cuadricula;
	cin >>cuadricula;
	
	double intervalo_x = (a/cuadricula);
	double intervalo_y = (b/cuadricula);
	
	cout<<"Intervalo X de 0 a "<< a <<endl;
	cout<<"Intervalo Y de 0 a "<< b <<endl;
	
	
	
	cout<<" La cuadricula en x sera "<< intervalo_x <<endl;
	cout<<" La cuadricula en y sera "<< intervalo_y <<endl;
		
	
	int Voltaje;
	for (int i = 1;i <= (iteraciones); i+=1){
		//computando valores en Y y X
		//Voltaje = sinh(n*Pi*)
		for (int j = -a; j <= a; j +=intervalo_x){
			//cout << "Valor en X ="<<j<<endl;
			for (int k = -b ; k <= b; k+=intervalo_y){
				// Yo ya tengo las parejas y la impresion de datos.
				// X -> j y Y -> k
				Voltaje = (k*k)+(j*j);
				cout << Voltaje << ",";
				//cout<< j << "," << k << endl;
			}
			cout<< endl;
		}
		
	}
	
	
	
	int numero = cos(Pi);
	int numero_2 = sinh(0);
	cout<<numero<<endl;
	cout<<numero_2<<endl;


	return 0;
}
