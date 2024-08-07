#include<iostream>
using namespace std;
int main(){
	int n;
	int ident;
	int matriz1[100][100];
	cout<<"Ingrese numero de filas: ";
	cin>>n;
	cout<<"matriz 1: "<<endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>matriz1[i][j];
		}
	}
	cout<<"indique el numero a identificar: ";
	cin>>ident;
	cout<<"el numero "<<ident<<" se encuentra en la "<<endl;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if(matriz1[i][j]==ident){
				cout<<"posicion: fila ["<<i<<"] ,columna ["<<j<<"]"<<endl;
			}
		}
	}
	return 0;
}
