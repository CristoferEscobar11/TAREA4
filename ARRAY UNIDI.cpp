#include <iostream>
using namespace std;
main (){
	//array=arreglo o coleccion matriz
	//se utilizan para almacenar varios valores
	int tam=0,suma=0,promedio=0;
	cout<<"Cuantas notas desea ingresar:";
	cin>>tam;
	int notas[tam];
		for(int i=0;i<tam;i++){
			cout<<"Ingrese nota:"<<i+1<<":";
			cin>>notas[i];
			
		}
		for(int i=0;i<tam;i++){
			suma+=notas[i];
			}
			promedio=suma/tam;
			cout<<"El promedio es:"<<promedio<<endl;


	system ("pause");
}
main(){
	char nombre[30;]
	cout<<"Ingrese Nombre;";
	cin.get(nombre,30);
	cout<<nombre<<endl;
	
	
	
}
main()
string semana[7]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};

	for (int i=0;i<7;i++){
	cout<<semana[i]<<endl;
	
}
