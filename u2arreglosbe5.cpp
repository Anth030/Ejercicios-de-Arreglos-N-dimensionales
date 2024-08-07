#include <iostream>
using namespace std;
int main(){
	int n;
	int mayor=0, mini;
	int matriz[100][100];
	cout<<"Ingrese numero de filas: ";
	cin>>n;
	cout<<"datos de matriz : "<<endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>matriz[i][j];
			if(matriz[i][j]>mayor){
				mayor=matriz[i][j];
			}
			if(matriz[i][j]<mini){
				mini=matriz[i][j];
			}
		}
	}
	for (int i=0;i<n;i++){//si existe dos numeros mayores o minimos depetidos como 9 y 9, arrojara las posiciones de los repetidos mayores y minimos
		for (int j=0;j<n;j++){
			if(matriz[i][j]==mayor){
				cout<<"el maximo numero es "<<mayor<<" y se encuentra en la posicion: ";
				cout<<"fila ["<<i<<"] ,columna ["<<j<<"]"<<endl;
			}
			if(matriz[i][j]==mini){
				cout<<"el minimo numero es "<<mini<<" y se encuentra en la posicion: ";
				cout<<"fila ["<<i<<"] ,columna ["<<j<<"]"<<endl;
			}
		}
	}
	return 0;
}
